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
    
    // main menu section

    main_menu = MainMenu();
    main_menu.init(&window_mode,font_);

    // Game section

    game_stage_ = GameStage();
    game_stage_.init(&window_mode,font_);
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
            main_menu.update(window);
            break;
        case mode::game :
            game_stage_.update(window);
            break;
    }
        
    

}
void TowerDefence::draw(){
    switch (window_mode.get_status()){
        case mode::main_window :
            main_menu.draw(window);
            break;
        case mode::game :
            game_stage_.draw(window);
            break;
    }
}