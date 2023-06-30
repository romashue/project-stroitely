#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Project2/Stroitel.hpp"

using namespace std;
using namespace sf;

int score = 0;

int main()
{
    RenderWindow window(sf::VideoMode(1280, 720), L"Любимые строители");

    Image icon;
    if (!icon.loadFromFile("Image/icon.png"))
    {
        return 1;
    }
    window.setIcon(32, 32, icon.getPixelsPtr());

    //задний фон
    Texture stroika_texture;
    stroika_texture.loadFromFile("Image/stroika.png");
    RectangleShape gamingbackground(Vector2f(1280, 720));
    gamingbackground.setTexture(&stroika_texture);
    gamingbackground.setPosition(0, 0);

    //свая
    Texture svaya_texture;
    svaya_texture.loadFromFile("Image/svaya.png");
    RectangleShape svaya(Vector2f(500, 500));
    svaya.setTexture(&svaya_texture);
    svaya.setPosition(550, 150);
    

    Texture stroitel_texture;
    stroitel_texture.loadFromFile("Image/stroitel.png");
    RectangleShape stroitel(Vector2f(150,150));
    stroitel.setTexture(&stroitel_texture);
    stroitel.setPosition(350, 400);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Right)) 
        {
            stroitel.setPosition(700, 270);
            stroitel.setRotation(90);
        }
        if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            stroitel.setPosition(700, 600);
            score += 1;
        }

        window.clear();
        window.draw(gamingbackground);
        window.draw(svaya);
        window.draw(stroitel);
        window.display();
    }

    return 0;
}