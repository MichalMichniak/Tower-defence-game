#ifndef SWITCHDISPLAYBUTTON_HPP
#define SWITCHDISPLAYBUTTON_HPP

#include "Status.hpp"
#include <SFML/Graphics.hpp>
#include "SquareButton.hpp"
#include <string>
class SwitchDisplayButton : public SquareButton
{
private:
    mode changed_status_;
    Status* status_;
public:
    SwitchDisplayButton() = default;
    SwitchDisplayButton(mode changed_status,Status* stat_,float x, float y, 
            std::string txt, float width, float length, sf::Font font): SquareButton(x,y,txt,width,length,font), status_(stat_), changed_status_(changed_status){};
    void action() override { status_->set_status(changed_status_);};
    ~SwitchDisplayButton() = default;
};

#endif