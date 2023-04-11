#include "SquareButton.hpp"

#include <cmath>
/* implementation of SquareButton class methods*/

bool SquareButton::check_if_over(float x, float y){
    return get_x()<x && x<get_x()+length_ && get_y()<y && y<get_y()+width_;
}

void SquareButton::mouse_over(float x, float y){
    if (check_if_over(x,y)){
        color_ = sf::Color(230,230,230,200);
    }else{
        color_ = sf::Color(255,255,255,255);
    }
}

void SquareButton::mouse_clicked(float x, float y){
    
}

void SquareButton::draw(sf::RenderWindow& win){
    // draw rectangle
    sf::RectangleShape button = sf::RectangleShape(sf::Vector2f(length_,width_));
    button.setPosition(sf::Vector2f(get_x(),get_y()));
    button.setFillColor(color_);
    win.draw(button);

    // draw button text
    sf::Text txt = sf::Text(txt_, font_, 30);
    txt.setFillColor(sf::Color(0,0,0,255));
    sf::FloatRect textRect = txt.getLocalBounds();
    txt.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
    txt.setPosition(sf::Vector2f(get_x()+ length_/2.f,get_y() + width_/2.f));
    win.draw(txt);
}