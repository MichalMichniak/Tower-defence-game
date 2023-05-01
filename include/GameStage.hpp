#ifndef GAMESTAGE_HPP
#define GAMESTAGE_HPP

#include "Display.hpp"
#include "init.hpp"
#include "Status.hpp"
#include "init_game_obj.hpp"

class GameStage : public Display{
public:
    GameStage() = default;
    void init() override;
    void init(Status *window_mode, sf::Font font_);  
    void update(sf::RenderWindow& win) override;
    void draw(sf::RenderWindow& win) override;
    ~GameStage() = default;
private:
    std::vector<EnemyPath> enemy_path_vector;
    std::vector<Enemy> enemy_vector;
    float x_offset = 0;
    float y_offset = 0;
};



#endif