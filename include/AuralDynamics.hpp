#ifndef __AURALDYNAMICS_H__
#define __AURALDYNAMICS_H__

#ifdef AURALDYNAMICS_EXPORTS
#define DYNAMICS_API __declspec(dllexport)
#elif defined(_WIN32) || defined(_WIN64)
#define DYNAMICS_API __declspec(dllimport)
#elif __linux__
#define DYNAMICS_API
#endif


#endif