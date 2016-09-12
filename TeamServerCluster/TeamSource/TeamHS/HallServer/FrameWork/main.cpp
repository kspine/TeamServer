﻿#include "HallService.h"

#include  "EQ_IPAddresses.h"
#if defined (_WIN32) || defined (_WIN64)
#include "mdump.h"
#else
#endif

int main(int argc, char* argv[])
{
#if defined (_WIN32) || defined (_WIN64)
	MiniDumper dump(NULL, "TeamHall Server Dump");
#else
#endif

	cout << "★★★★★★★★★★★★★★★★★★★★★★★★★" << endl;
	cout << "★                                              ★" << endl;
	cout << "★      TeamHall Server                         ★" << endl;
	cout << "★       Copyright (c) 2015,21Pink              ★" << endl;
	cout << "★             All rights reserved.             ★" << endl;
	cout << "★                                              ★" << endl;
	cout << "★★★★★★★★★★★★★★★★★★★★★★★★★\n\n\n" << endl;

	CHallService HallService("TeamHall Server", "HallServer");
	HallService.RegisterService(argc, argv);

	return 0;
}