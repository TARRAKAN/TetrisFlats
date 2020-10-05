#include <cstdlib>
#include "figure.h"
#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow tetrisWindow(sf::VideoMode(320, 480), "TETRIS");
	tetrisWindow.clear(sf::Color::White);
	Figure figure(1);
	
	while (tetrisWindow.isOpen()) { // MAIN LOOP
		tetrisWindow.clear(sf::Color::White);
		figure.drawOn(tetrisWindow);
		sf::Event event;
		while(tetrisWindow.pollEvent(event)){ // EVENT CATCHER
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				tetrisWindow.close();
			if (event.type == sf::Event::KeyPressed)
				if (event.key.code == sf::Keyboard::Up) figure.rotate();
				else if (event.key.code == sf::Keyboard::Left) figure.goLeft();
				else if (event.key.code == sf::Keyboard::Right) figure.goRight();
		}
		tetrisWindow.display();
	}
	return EXIT_SUCCESS;
}