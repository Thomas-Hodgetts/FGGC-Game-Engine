#include "ParticleSystems.h"

ParticleSystem::ParticleSystem()
{

}
ParticleSystem::~ParticleSystem()
{

}

void ParticleSystem::CreateParticle(int amount, Particle* particle)
{
	const int size = amount;
	Particle* pa = new Particle[amount];
	for (int i = 0; i < amount; i++)
	{
		pa[i] = *particle;
	}
	m_ParticleStorage.push_back(pa);
}

std::map<int, int> FindParticle(Particle* particle)
{
	return std::map<int, int>();
}

void ParticleSystem::Update(float deltaTime)
{

}
void ParticleSystem::Draw()
{

}