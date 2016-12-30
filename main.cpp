#include <SFML/Graphics.hpp>
#include "GameObject.h"

int main()
{
	///INITIAL VARIABLES
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	///GAME LOOP
	while (window.isOpen())
	{
		///Quick tests
		pc::GameObject obj1;

		///EVENTS
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		///LOGIC CALLS

		///DRAW
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}
