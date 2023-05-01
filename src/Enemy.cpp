#include "Enemy.hpp"
#include <math.h>

void Enemy::draw(sf::RenderWindow& win, float x, float y){
    sf::CircleShape enemy_shape = sf::CircleShape(7);
    enemy_shape.setOrigin(3.5,3.5);
    enemy_shape.setPosition(x_ - x, y_ - y);
    enemy_shape.setFillColor(sf::Color(40,255,120,255));
    win.draw(enemy_shape);
};

void Enemy::update(float next_x, float next_y, float radius){
    float l_x = next_x - x_;
    float l_y = next_y - y_;
    float norm = sqrt(l_x*l_x + l_y*l_y);
    x_ = x_ + speed*(l_x/norm);
    y_ = y_ + speed*(l_y/norm);
    if(norm < radius){
        enemy_pat_nr ++;
    }
};