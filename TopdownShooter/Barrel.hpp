#pragma once
#include "GameObject.hpp"

class Barrel : public SpriteObject
{
private:
	bool collided = false;
public:
	Barrel(sf::Texture& texture, sf::Vector2f pos);

	void update(float deltaTime) override;
	bool isAlive() override;
};