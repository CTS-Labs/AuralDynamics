#include "AuralDynamics.hpp"

namespace AuralDynamics::Core {
	class DYNAMICS_API Base
	{
	public:
		static Base instance;
		bool Initialize();
	};
}

