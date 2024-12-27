#include "Base.hpp"
#include <iostream>
namespace AuralDynamics::Core {
	Base Base::instance;

	bool Base::Initialize() {
		return true;
	}
}