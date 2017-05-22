
#ifndef __REFLIBRARYDEFINE_H__
#define __REFLIBRARYDEFINE_H__

#ifndef REFLIBRARY_STATIC

#ifdef REFLIBRARY_EXPORTS

#define REFLIBRARY_API __declspec(dllexport)
#else
#define REFLIBRARY_API __declspec(dllimport)
#endif

#else

#define REFLIBRARY_API	

#endif

#endif // __REFLIBRARYDEFINE_H__