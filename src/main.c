
#define OS_NONE    0
#define OS_LINUX   1
#define OS_WINDOWS 2
#define OS_MACOS   3
#define OS_OTHER   4

#if defined( __WIN32__ ) || defined( WIN32 ) || defined( _WIN32 ) || defined( __CYGWIN__ ) || defined( __MINGW32__ ) || defined( __WINDOWS__ )
#define OS OS_WINDOWS
#define __WIN32__ 1
#elif defined( __LINUX__ ) || defined( linux ) || defined( __linux ) || defined( __linux__ )
#define OS OS_LINUX
#define __LINUX__ 1
#elif defined( __MACOSX__ ) || defined( __APPLE__ )
#define OS OS_MACOS
#define __MACOSX__ 1
#else
#define OS OS_OTHER
#endif

#include <SDL2/SDL.h>
#include <GLEW/glew.h>

int main(int argc, char* args[])
{

	return -1;
}