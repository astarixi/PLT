// Generated by dia2code
#ifndef STATE__COMBAT__H
#define STATE__COMBAT__H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>

namespace state {
  class ListeElements;
}

#include "ListeElements.h"

namespace state {

  /// class Combat - 
  class Combat {
    // Attributes
  protected:
    sf::Time timerDebutTour;
    std::vector<int> listeTour;
    int tourActuel;
    // Operations
  public:
    Combat ();
    ~Combat ();
    void createListe (ListeElements listePersonnages);
    void tourSuivant (int clk);
    int getTimerDebutTour ();
  };

};

#endif
