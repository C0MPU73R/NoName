/*
@filename: GenericHandler.h
*/

#ifndef GENERAL_HANDLER_H
#define GENERAL_HANDLER_H

#include <string>

#include "..\Networking\TCPSocket.h"

class GeneralHandler
{
	public:
		bool Handle(const std::string *split, const int paramNum);
};

#endif