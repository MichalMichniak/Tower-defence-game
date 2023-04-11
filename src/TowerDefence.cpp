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
    
}
void TowerDefence::update(){
    //core logic
    sf::Event event;
    while (this->window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->window.close();
    }

}
void TowerDefence::draw(){
    this->window.clear(sf::Color::Black);
}