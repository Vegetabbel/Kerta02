#pragma once

class Vector2 
{
public:
	float x;
	float y;

	Vector2(float x, float y) : x(x), y(y) {
	}

	Vector2() : x(0.0f), y(0.0f) {
	}

	~Vector2() = default;
};

class Player
{
private:
	Vector2 position;
public:
	Player();

	void setPosition(Vector2& position);
	Vector2 getPosition();
	void print();

	~Player();
};

