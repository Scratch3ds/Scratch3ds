#if __INTELLISENSE__
typedef unsigned int __SIZE_TYPE__;
typedef unsigned long __PTRDIFF_TYPE__;
#define __attribute__(q)
#define __builtin_strcmp(a,b) 0
#define __builtin_strlen(a) 0
#define __builtin_memcpy(a,b) 0
#define __builtin_va_list void*
#define __builtin_va_start(a,b)
#define __extension__
#endif

#if defined(_MSC_VER)
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;
#endif

#include <3ds.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

int main()
{
	// Initialize the services
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	
	int version_major;
	int version_minor;
	int version_patch;
	ifstream about_txt;
	
	about_txt.open("../assets/english/text/about.txt")
	
	version_major = 0;
	version_minor = 0;
	version_patch = 2;
	
	printf("This is the placeholder for Scratch3ds\n\n")
	
	while (getline(about_txt, line)){
		if (line.find("%i.%i.%i")){
			printf(line, version_major, version_minor, version_patch)
		}
		else (){
			printf(line)
		}
		printf("\n")
	}
	
	about_txt.close()
	
	consoleInit(GFX_BOTTOM, NULL);
	
	printf("Press Start to exit");

	// Main loop
	while (aptMainLoop())
	{
		hidScanInput();

		// If Start button is pressed, we exit
		if (hidKeysDown() & KEY_START)
		{
			break;
		}
	}

	// Exit the services
	gfxExit();
	return 0;
}