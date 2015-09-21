#include "Player.h"
#include <iostream>

Player::Player()
{
}

void Player::setPosition(Vector2& position)
{
	this->position = position;
}
Vector2 Player::getPosition()
{
	return position;
}

void Player::print()
{
	std::cout << "Player X:" << position.x << std::endl;
	std::cout << "Player Y:" << position.y << std::endl;
}

Player::~Player()
{
}
