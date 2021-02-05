#pragma once
#include "Vector3D.h"
#include "ParticleModel.h"
#include <Vector>
#include <map>
#include <cstdlib>

class ParticleSystem
{
	enum ParticleData
	{

	};


	public:
		ParticleSystem();
		~ParticleSystem();

		void Update(float deltaTime);
		void Draw();
		void CreateParticle(int amount, Particle* particle);
		//Removes a specified particle array from the system
		void RemoveParticles(Particle* particle);
		void AddforceToParticle(Particle* particle);
		std::vector<Particle*> ReturnParticles() { return m_ParticleStorage; };



	private:

		std::map<int, int> FindParticle(Particle* particle);
		std::vector<Particle*> m_ParticleStorage;
	
};

