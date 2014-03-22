//#include "GameStates/GameIsOnState.hpp"
#include "GameStates/GameIsOnState.hpp"

GameIsOnState::GameIsOnState()
{
}

GameIsOnState::~GameIsOnState()
{
}

void GameIsOnState::update(float dt)
{
    stage->update(dt);
}

void GameIsOnState::draw()
{
    renderWindowPtr->clear();
    stage->draw();
}
    
void GameIsOnState::processState(float dt)
{
    std::cout << "GameIsOnState::processState   " << std::endl;
    update(dt);
    draw(); 
    display();
}
    
