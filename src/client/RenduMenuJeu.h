// Generated by dia2code
#ifndef CLIENT__RENDUMENUJEU__H
#define CLIENT__RENDUMENUJEU__H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

namespace client {

  /// class RenduMenuJeu - 
  class RenduMenuJeu {
    // Attributes
  public:
    int menu;
    // Operations
  public:
    RenduMenuJeu ();
    ~RenduMenuJeu ();
    void dessin (sf::RenderWindow& w);
    void setMenu (int menu);
  };

};

#endif
