#include "Game.hpp" 
#include "Level1.hpp"

int main()
{
	Game game(800, 600, "My Game!");
	Game::attachLevel(new Level1());
	Game::run();
	return 0;
}