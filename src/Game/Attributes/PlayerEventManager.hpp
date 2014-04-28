#ifndef _PLAYEREVENTMANAGER_HPP_
#define _PLAYEREVENTMANAGER_HPP_

#include "Common/Interfaces/IEventManager.hpp"
#include "Common/Angle.hpp"
#include "Common/Delegate.hpp"
#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"

#include "Game/Attributes/Actions.hpp"

#include <iostream>

typedef sf::Event event_t;

//class Actions;
//typedef Actions actions_t;

class PlayerEventManager {
private:
    //Actions* act;
    Delegate move;
    Delegate stop;
    Delegate throwBomb;
public:
    PlayerEventManager();
    virtual ~PlayerEventManager();

    virtual void handleEvents(const event_t&);
    void handleKeyPressedEvents(const event_t&);
    void handleKeyReleasedEvents(const event_t&);

    //void setPlayerActions(Actions &);
    void setAction(Delegate*, std::string);
};


#endif /* end of include guard: _PLAYEREVENTMANAGER_HPP_ */