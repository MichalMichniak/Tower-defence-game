#ifndef ENEMYPATH_HPP
#define ENEMYPATH_HPP
#include <SFML/Graphics.hpp>

class EnemyPath{
public: 
    EnemyPath(float x, float y, float radius, float visibility): x_(x),y_(y),radius_(radius),visibility_(visibility){};
    void draw(sf::RenderWindow& win, float x, float y);
    void set_visibility(bool visibility){ visibility_ = visibility; };
    float get_x(){return x_;};
    float get_y(){return y_;};
    float get_radius(){return radius_;};
private:
    bool visibility_;
    float x_;
    float y_;
    float radius_;
};

#endif 