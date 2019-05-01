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

int main()
{
// Initialize the services
gfxInitDefault();
consoleInit(GFX_TOP, NULL);

int version_major;
int version_minor;
int version_patch;

version_major = 0;
version_minor = 0;
version_patch = 2;

printf("This is the placeholder for Scratch3ds\n\n");

printf("About Scratch3ds\n");
printf("________________________\n");
printf("Scratch3ds Version %i.%i.%i by Gadzooks2\n", version_major, version_minor, version_patch);
printf("Based on Scratch 2.0 by MIT and the Lifelong Kind-\nergarten Media Group\n");
printf("Programming:Virtual-Wii noob and Gadzooks2 (@Shaymin524 on Scratch)\n");
printf("Graphics Design: HeyHeyPizza111\n");
printf("UI Design & Concept: TolerableDruid6 (@dude341 on Scratch)\n");

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
