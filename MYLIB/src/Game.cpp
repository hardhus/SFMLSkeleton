#include "Game.hpp"

Game::Game()
{
    _window.create(sf::VideoMode(720, 480), "Game");
    _window.setFramerateLimit(60);

};

void Game::run()
{
    while (_window.isOpen())
    {
        sf::Event e;
        while (_window.pollEvent(e))
        {
            if (e.type == sf::Event::Closed) _window.close();
        }
        
        _window.clear();

        _window.display();
    }
    
};