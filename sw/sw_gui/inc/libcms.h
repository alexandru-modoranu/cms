#ifndef LIBCMS_H
#define LIBCMS_H

#ifdef ADD_EXPORTS
	#define LIBCMS_API __declspec(dllexport)
#else
	#define LIBCMS_API __declspec(dllimport)
#endif

#define LIBCMS_CALL __cdecl

LIBCMS_API int LIBCMS_CALL cms_lib_get_version(char *version);

#endif
