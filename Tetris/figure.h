#ifndef _FIGURE_H_
#include <SFML/Graphics.hpp>
class Figure {
private:
	int shape[4] = {0};
	struct Coordinates{
		int x, y;
	}a[4] = { 0 }, b[4] = {0};
	sf::Texture tFlats;
	sf::Sprite sFlats;
public:
	void setShape(int shapeNum); //Shapes: 0 == I, 1 == S, 2 == Z, 3 == T, 4 == L, 5== J, 6== O; 
	int* getShape();
	void drawOn(sf::RenderWindow &window);
	Figure(int type);
	void setTexture();
};
#endif //_FIGURE_H_
