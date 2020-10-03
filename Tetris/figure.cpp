#include <SFML/Graphics.hpp>
#include "figure.h"


Figure::Figure(int type) {
	setShape(type);
	for (int i = 0; i < 4; i++)
	{
		a[i].x = shape[i] % 2;
		a[i].y = shape[i] / 2;
	}
	setTexture();
};

void Figure::setShape(int shapeNum){
	switch (shapeNum) {
	case 1:
		shape[0] = 1;//NEED TO DO SMTH WITH THIS
		shape[1] = 3;//
		shape[2] = 5;//
		shape[3] = 7;//
		break;
	case 2:
		shape[0] = 2;//
		shape[1] = 4;//
		shape[2] = 5;//
		shape[3] = 7;//
		break;
	case 3:
		shape[0] = 3;//
		shape[1] = 5;//
		shape[2] = 4;//
		shape[3] = 5;//
		break;
	case 4:
		shape[0] = 3;//
		shape[1] = 5;//
		shape[2] = 4;//
		shape[3] = 7;//
		break;
	case 5:
		shape[0] = 2;//
		shape[1] = 3;//
		shape[2] = 5;//
		shape[3] = 7;//
		break;
	case 6:
		shape[0] = 3;//
		shape[1] = 5;//
		shape[2] = 7;//
		shape[3] = 6;//
		break;
	case 7:
		shape[0] = 2;//
		shape[1] = 3;//
		shape[2] = 4;//
		shape[3] = 5;//
		break;
	}
}

int* Figure::getShape() { return shape; }

void Figure::drawOn(sf::RenderWindow &window) {
	for (int i = 0; i < 4; i++){
		sFlats.setPosition(a[i].x * 18, a[i].y * 18);
		window.draw(sFlats);
	}
}

void Figure::setTexture(){
	tFlats.loadFromFile("textures/bxs.bmp");
	sFlats.setTexture(tFlats);
	sFlats.setTextureRect(sf::IntRect(0, 0, 18, 18));
}
