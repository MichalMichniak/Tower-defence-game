#include "MainMenu.hpp"

void MainMenu::init(Status *window_mode, sf::Font font_){
    sb_vector.push_back(SquareButton(255,255,"test",50,100,font_));
    sdb_vector.push_back(SwitchDisplayButton(mode::game,window_mode,255,310,"Play",50,100,font_));
};
void MainMenu::update(sf::RenderWindow& win){
    sf::Vector2i mouse_pos = sf::Mouse::getPosition(win);
    for(auto it = sb_vector.begin(); it != sb_vector.end(); it++){
        it->mouse_over(mouse_pos.x,mouse_pos.y);
    }
    for(auto it = sdb_vector.begin(); it != sdb_vector.end(); it++){
            it->mouse_over(mouse_pos.x,mouse_pos.y);
    }
    if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
        for(auto it = sb_vector.begin(); it != sb_vector.end(); it++){
            it->mouse_clicked(mouse_pos.x,mouse_pos.y);
        }
        for(auto it = sdb_vector.begin(); it != sdb_vector.end(); it++){
            it->mouse_clicked(mouse_pos.x,mouse_pos.y);
        }
    }
};
void MainMenu::draw(sf::RenderWindow& win){
    win.clear(sf::Color::Black);
    for(auto it = sb_vector.begin(); it != sb_vector.end(); it++){
        it->draw(win);
    }
    for(auto it = sdb_vector.begin(); it != sdb_vector.end(); it++){
        it->draw(win);
    }
};
