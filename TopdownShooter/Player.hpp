#pragma once
#include "Game.hpp"
#include "GameObject.hpp"

class TileObject;
class Player : public SpriteObject
{
private:
	TileObject* tilemap;
	float cooldown;
	float health;

public:
	Player(sf::Texture& texture, TileObject* tilemap);

	void update(float deltaTime) override;
};