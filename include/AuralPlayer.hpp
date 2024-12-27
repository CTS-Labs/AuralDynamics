#ifndef __AURALPLAYER_HPP__
#define __AURALPLAYER_HPP__

#include "AuralDynamics.hpp"

namespace AuralDynamics::Core {
	DYNAMICS_API class AuralPlayer
	{
	public:
		void loadSound();
		void loadSFX_Env();
		void play();
		bool isPlaying;
	};
}

#endif
