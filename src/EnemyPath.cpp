#include "EnemyPath.hpp"

void EnemyPath::draw(sf::RenderWindow& win, float x, float y){
    if(visibility_){
        sf::CircleShape circ = sf::CircleShape(radius_);
        circ.setFillColor(sf::Color(255,255,255,50));
        circ.setOrigin(radius_,radius_);
        circ.setPosition(x_ - x,y_ - y);
        win.draw(circ);
        sf::CircleShape circ2 = sf::CircleShape(1);
        circ2.setFillColor(sf::Color(255,0,0,255));
        circ2.setPosition(x_ - x,y_ - y);
        circ2.setOrigin(1,1);
        win.draw(circ2);
    }
};