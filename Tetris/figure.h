#ifndef _FIGURE_H_
#include <SFML/Graphics.hpp>
class Figure {
private:
	int shape[4];
	struct Coordinates{
		int x, y;
	}a[4], b[4];
	sf::Texture tFlats;
	sf::Sprite sFlats;
public:
	Figure(int type);
	int* getShape();

};
#endif //_FIGURE_H_
