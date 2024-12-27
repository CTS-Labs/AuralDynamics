#ifndef __OAL_HPP__
#define __OAL_HPP__

#include <string>
#include <al.h>
#include <alc.h>

#define alCall(function, ...) alCallImpl(__FILE__, __LINE__, function, __VA_ARGS__)
#define alcCall(function, device, ...) alcCallImpl(__FILE__, __LINE__, function, device, __VA_ARGS__)

class oal
{
	bool check_al_errors(const std::string& filename, const std::uint_fast32_t line);
	bool check_alc_errors(const std::string& filename, const std::uint_fast32_t line, ALCdevice* device);

	template<typename alFunction, typename... Params>
	auto alCallImpl(const char* filename, const std::uint_fast32_t line, alFunction function, Params... params) -> typename std::enable_if_t<!std::is_same_v<void, decltype(function(params...))>, decltype(function(params...))>;
	
	template<typename alcFunction, typename... Params>
	auto alcCallImpl(const char* filename, const std::uint_fast32_t line, alcFunction function, ALCdevice* device, Params... params) -> typename std::enable_if_t<std::is_same_v<void, decltype(function(params...))>, bool>;

	template<typename alcFunction, typename ReturnType, typename... Params>
	auto alcCallImpl(const char* filename, const std::uint_fast32_t line, alcFunction function, ReturnType& returnValue, ALCdevice* device, Params... params) -> typename std::enable_if_t<!std::is_same_v<void, decltype(function(params...))>, bool>;

};

#endif
