#ifndef __BASE_HPP__
#define __BASE_HPP__

#include "AuralDynamics.hpp"

namespace AuralDynamics::Core {
	class DYNAMICS_API Base
	{
	public:
		static Base instance;
		bool Initialize();
	};
}

#endif