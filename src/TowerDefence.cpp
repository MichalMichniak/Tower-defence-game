#include "TowerDefence.hpp"

void TowerDefence::run(){
    this->init();
    while (this->window.isOpen())
    {
        this->update();
        this->draw();
        this->window.display();
        sf::sleep(this->delay);
    }
}
void TowerDefence::init(){
    window_mode = Status(mode::main_window);
    font_.loadFromFile("../beauty_font.otf");
    sb_vector.push_back(SquareButton(255,255,"Menu",50,100,font_));
    sdb_vector.push_back(SwitchDisplayButton(mode::game,window_mode,255,310,"Menu 2",50,100,font_));
}

void TowerDefence::update(){
    //core logic
    sf::Event event;
    while (this->window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->window.close();
    }
    sf::Vector2i mouse_pos = sf::Mouse::getPosition(window);
    switch (window_mode.get_status()){
        case mode::main_window :
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
            break;
        case mode::game :
            break;
    }
        
    

}
void TowerDefence::draw(){
    switch (window_mode.get_status()){
        case mode::main_window :
            this->window.clear(sf::Color::Black);
            for(auto it = sb_vector.begin(); it != sb_vector.end(); it++){
                it->draw(window);
            }
            for(auto it = sdb_vector.begin(); it != sdb_vector.end(); it++){
                it->draw(window);
            }
            break;
        case mode::game :
            this->window.clear(sf::Color::Blue);
            break;
    }
}