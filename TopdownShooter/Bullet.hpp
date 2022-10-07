#pragma once
#include "GameObject.hpp"

class TileObject;
class Bullet : public SpriteObject
{
private:
	float speed;
	TileObject* tilemap;
public:
	int health = 1;
public:
	Bullet(sf::Texture& texture, TileObject* tilemap, int tag);

	void update(float deltaTime) override;
	bool isAlive() override;
};