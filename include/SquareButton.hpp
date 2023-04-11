#ifndef SQUAREBUTTON_HPP
#define SQUAREBUTTON_HPP


#include "Clickable.hpp"
#include <string>
//using namespace std;
//using std::string;

class SquareButton : public Clickable
{
private:
    float length_;
    float width_;
    sf::Color color_;
    sf::Font font_;
public:
    std::string txt_;
    SquareButton(float x, float y, std::string txt, float width, float length, sf::Font font): Clickable(x,y), txt_(txt), width_(width), length_(length), font_(font) {};
    SquareButton() = default;
    //virtual void action();
    bool check_if_over(float x,float y);
    void mouse_over(float x,float y);
    void mouse_clicked(float x,float y);
    void draw(sf::RenderWindow& win);
    // getters setters
    float get_length(){ return length_; }
    float get_width(){ return width_; }
    void set_length(float length){ length_ = length; }
    void set_width(float width){ width_ = width; }
    ~SquareButton() = default;
};

#endif