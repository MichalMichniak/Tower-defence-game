#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <SFML/Graphics.hpp>

class Enemy{
public:
    Enemy() = default;
    Enemy(float x, float y, float speed_): x_(x), y_(y), enemy_pat_nr(0), speed(speed_){};
    virtual void update(float next_x, float next_y, float radius);
    virtual void draw(sf::RenderWindow& win, float x, float y);
    std::size_t get_enemy_pat_nr() {return enemy_pat_nr;};
    virtual ~Enemy(){};
private:
    std::size_t enemy_pat_nr;
    float speed;
    float x_;
    float y_;
};


#endif