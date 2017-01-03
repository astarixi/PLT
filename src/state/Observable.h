// Generated by dia2code
#ifndef STATE__OBSERVABLE__H
#define STATE__OBSERVABLE__H

#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

namespace state {
  class Observer;
}

#include "Observer.h"

namespace state {

  /// class Observable - 
  class Observable {
    // Associations
    // Attributes
  public:
    std::vector<Observer *> observers;
    // Operations
  public:
    virtual ~Observable ();
    virtual void notifyObserver (char typeChg, sf::Time time);
    void registerObserver (Observer * obs);
  };

};

#endif
