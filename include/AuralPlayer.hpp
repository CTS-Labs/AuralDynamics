#ifndef __AURALPLAYER_HPP__
#define __AURALPLAYER_HPP__

#include "AuralDynamics.hpp"
#include <vector>
#include <string>

namespace AuralDynamics::Core {
	class DYNAMICS_API AuralPlayer
	{
	public:
		std::vector<char> buffer;
		
		AuralPlayer();
		~AuralPlayer();

		void loadSound();
		void loadSFX_Env();
		void play();
		bool isPlaying;
	};
}

#endif
