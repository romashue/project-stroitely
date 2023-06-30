#include "Stroitel.hpp"

using namespace sf;

Stroitel::Stroitel() 
{
    Stroitel_Texture.loadFromFile("Image/stroitel.png");
    stroitel.setTexture(&Stroitel_Texture);
    stroitel.setPosition(350, 400);
}

void Stroitel::rigth()
{
    stroitel.setPosition(700, 270);
    stroitel.setRotation(90);
}

void Stroitel::down()
{
    stroitel.setPosition(700, 600);

}

void Stroitel::draw(RenderWindow& window)
{
    window.draw(stroitel);
}