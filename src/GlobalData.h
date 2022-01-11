/*
@filename: GlobalData.h
*/

#ifndef GLOBAL_DATA_H
#define GLOBAL_DATA_H

#include "Networking\TCPSocket.h"
#include "Bot\GenericBot.h"
#include <vector>

class GlobalData
{
	public:
		GlobalData(const std::string &configFile, TCPSocket *tcpsock); //Dummy for now

		static GlobalData* GetGlobalData();

		const std::string& GetServerName();
		TCPSocket& GetSocket();

		std::vector<GenericBot*> m_botList;
	private:
		std::string m_serverName;
		TCPSocket *m_sock;
};

#endif