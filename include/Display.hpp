#ifndef DISPLAY_HPP
#define DISPLAY_HPP
#include <SFML/Graphics.hpp>
#include "Status.hpp"

class Display{
public:
    Display() = default;
    virtual void init() = 0;
    virtual ~Display(){};
    virtual void update(sf::RenderWindow& win) = 0;
    virtual void draw(sf::RenderWindow& win) = 0;
private:  
};

#endif