// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define __AP__ 1
//#define __CARD__ 1

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#ifdef WIN32
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include <windows.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

#define __getch _getch
#define __kbhit _kbhit

#else

#include "lp_stdlib.h"
#include "lp_stdio.h"
#include "lp_conio.h"
#include "lp_windows.h"
#include "lp_string.h" // strcpy_s
#endif


#include <string>
#include <map>
#include <vector>
#include <limits>

//#include <atltime.h>


// TODO: reference additional headers your program requires here
#include <winsock2.h>