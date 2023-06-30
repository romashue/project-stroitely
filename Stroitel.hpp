#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Stroitel
{
private:
	Texture Stroitel_Texture;
	RectangleShape stroitel;
public:
	Stroitel();
	void rigth();
	void down();
	void draw(RenderWindow& window);
	~Stroitel() {}
};

