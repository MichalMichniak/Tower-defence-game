#ifndef TOWERDEFENCE_HPP
#define TOWERDEFENCE_HPP

#include <SFML/Graphics.hpp>

#define WIDTH 800
#define HEIGHT 600

enum mode{
    main_window
};

class TowerDefence{
public:
    TowerDefence() : window(sf::VideoMode(WIDTH,HEIGHT),"Tower Defence"), delay(sf::milliseconds(10)), window_mode(mode::main_window) {}; 
    void run();
private:
    sf::RenderWindow window;
    sf::Time delay;
    mode window_mode;
protected:
    void init();
    void update();
    void draw();
};

#endif