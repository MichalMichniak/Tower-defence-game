#include "GameStage.hpp"


void GameStage::init(){};
void GameStage::init(Status *window_mode, sf::Font font_){
    // test

    enemy_path_vector.push_back(EnemyPath(50,50,10,true));
    enemy_path_vector.push_back(EnemyPath(250,50,10,true));
    enemy_path_vector.push_back(EnemyPath(50,250,10,true));
    enemy_path_vector.push_back(EnemyPath(250,250,10,true));
    enemy_path_vector.push_back(EnemyPath(125,125,10,true));

    enemy_vector.push_back(Enemy(0,0,1));
    enemy_vector.push_back(Enemy(100,100,1));
    // end test
};

void GameStage::update(sf::RenderWindow& win){
    // enemies update
    for(auto it = enemy_vector.begin(); it != enemy_vector.end();it++){
        size_t flag_nr = it->get_enemy_pat_nr();
        it->update(enemy_path_vector[flag_nr%enemy_path_vector.size()].get_x(),enemy_path_vector[flag_nr%enemy_path_vector.size()].get_y(),enemy_path_vector[flag_nr%enemy_path_vector.size()].get_radius());
    }
}

void GameStage::draw(sf::RenderWindow& win){
    win.clear(sf::Color::Black);
    // REMEMBER ABOUT OFFSET!
    for(auto it = enemy_path_vector.begin(); it != enemy_path_vector.end();it++){
        it->draw(win, x_offset, y_offset);
    }

    for(auto it = enemy_vector.begin(); it != enemy_vector.end();it++){
        it->draw(win, x_offset, y_offset);
    }
}