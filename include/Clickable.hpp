#ifndef CLICKABLE_HPP
#define CLICKABLE_HPP

#include <SFML/Graphics.hpp>


class Clickable
{
private:
    float x_;
    float y_;
public:
    Clickable(float x, float y): x_(x), y_(y) {};
    Clickable() = default;
    virtual bool check_if_over(float x, float y) = 0;
    virtual void mouse_over(float x, float y) = 0;
    virtual void mouse_clicked(float x, float y) = 0;
    virtual void draw(sf::RenderWindow& win) = 0;
    // getters setters:
    float get_x(){ return x_; }
    float get_y(){ return y_; }
    void set_x(float x){ this->x_ = x; }
    void set_y(float y){ this->y_ = y; }
    virtual ~Clickable() = default;
};


#endif