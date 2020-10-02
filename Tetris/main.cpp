#include <cstdlib>
#include "figure.h"
#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow tetrisWindow(sf::VideoMode(320, 480), "TETRIS");
	
	while (tetrisWindow.isOpen()) { // MAIN LOOP
		sf::Event event;
		while(tetrisWindow.pollEvent(event)){ // EVENT CATCHER
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				tetrisWindow.close();
		}
		tetrisWindow.clear(sf::Color::White);
		Figure figure(3);
		tetrisWindow.display();
	}
	return EXIT_SUCCESS;
}