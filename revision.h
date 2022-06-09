#ifndef ASSIMP_REVISION_H_INC
#define ASSIMP_REVISION_H_INC

#define GitVersion 0
#define GitBranch "@GIT_BRANCH@"

#define VER_MAJOR 4
#define VER_MINOR 2
#define VER_PATCH 5
#define VER_BUILD 0

#define STR_HELP(x) #x
#define STR(x) STR_HELP(x)

#define VER_FILEVERSION             VER_MAJOR,VER_MINOR,VER_PATCH,VER_BUILD

#define VER_FILEVERSION_STR         STR(VER_MAJOR) "." STR(VER_MINOR) "." STR(VER_PATCH) "." STR(VER_BUILD)

#define VER_COPYRIGHT_STR           "\xA9 2006-2022"

#define VER_ORIGINAL_FILENAME_STR   "assimp.dll"

#endif // ASSIMP_REVISION_H_INC
