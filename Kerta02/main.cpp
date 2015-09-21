#include "Person.h"
#include "Player.h"
#include <iostream>
#include "Car.h"

void carFunc(Car car)
{
	
}

int main(int argc, char** argv) {
	Person personA("Kappa Nospace", 69);
	Person personB("Keepo", 30);
	Person personC("Darth Vader", 48);

	std::cout << personA.getName() << std::endl;

	Vector2 v1;
	Vector2 v2(10.0f, 10.0f);

	Player player1;
	player1.setPosition(Vector2(256.0f, 12.24f));
	player1.print();

	{
		{
			Car nissan("Nissan", 1232);
		}

		Car opel("Opel", 190);

		opel.print();

		for (size_t i = 0; i < 5; i++)
		{
			opel.accelerate();
		}

		std::cout << std::endl;

		opel.print();

		std::cin.get();

		
		{
	}
		/* Car car = carFunc();
		car.print(); */
		return 0;
}