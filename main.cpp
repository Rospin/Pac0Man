#include <conio.h>

#include <SFML/Graphics.hpp>

#include "player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(630, 630), "Pacman");
    window.setFramerateLimit(30);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
    getch();
    return 0;
}
