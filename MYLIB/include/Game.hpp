#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Game
{
public:
    Game();
    void run();

private:
    sf::RenderWindow _window;
};