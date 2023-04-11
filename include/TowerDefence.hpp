#ifndef TOWERDEFENCE_HPP
#define TOWERDEFENCE_HPP

//#include <SFML/Graphics.hpp>
#include "init.hpp"


#define WIDTH 800
#define HEIGHT 600


class TowerDefence{
public:
    TowerDefence(sf::RenderWindow& win) : window(win), delay(sf::milliseconds(10)), window_mode(mode::main_window) {}; 
    void run();
private:
    sf::RenderWindow& window;
    sf::Time delay;
    Status window_mode;
    sf::Font font_;
    std::vector<SquareButton> sb_vector;
    std::vector<SwitchDisplayButton> sdb_vector;
protected:
    void init();
    void update();
    void draw();
};

#endif