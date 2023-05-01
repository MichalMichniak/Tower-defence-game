#ifndef MAINMENU_HPP
#define MAINMENU_HPP
#include "Display.hpp"
#include "init.hpp"
#include "Status.hpp"

class MainMenu : public Display
{
public:
    MainMenu(){};
    void init() override {};
    void init(Status *window_mode, sf::Font font_);
    void update(sf::RenderWindow& win) override;
    void draw(sf::RenderWindow& win) override;
    ~MainMenu() = default;
private:
    std::vector<SquareButton> sb_vector;
    std::vector<SwitchDisplayButton> sdb_vector;
};


#endif