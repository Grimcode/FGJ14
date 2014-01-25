#pragma once
#include <SFML\System.hpp>
#include <SFML\Graphics.hpp>

class bullet
{
public:
	bullet(sf::Vector2f player_pos);
	~bullet(void);

	void Update();
	sf::Vector2f pos;
	sf::FloatRect collison_pox;
	bool hit;

	void setHit();

};

