// Generated by dia2code
#ifndef CLIENT__CERTEXTE__H
#define CLIENT__CERTEXTE__H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

namespace client {

  /// class CerTexte - 
  class CerTexte {
    // Attributes
  public:
    sf::Text texte;
    sf::CircleShape cercle;
    sf::Font font;
    // Operations
  public:
    void ChangeTexte (const sf::String& txt);
    CerTexte ();
    ~CerTexte ();
  };

};

#endif
