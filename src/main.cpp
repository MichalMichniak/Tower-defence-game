#include <stdio.h>
#include "init.hpp"

#include "TowerDefence.hpp"

int main(int argc, char* argv[]){
    sf::RenderWindow win = sf::RenderWindow(sf::VideoMode(WIDTH,HEIGHT),"Tower Defence");
    TowerDefence twdef(win);
    twdef.run();
    return 0;
}