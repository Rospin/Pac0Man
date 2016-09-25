#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

    struct player
    {
        //Variables
            //Sprite
                sf::Sprite player;

            //Position
                int pos_x, pos_y;
                int box_x, box_y;

            //Movement
                bool reachedCenter;
                char dir;

        //Function

    };
