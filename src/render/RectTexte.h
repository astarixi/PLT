// Generated by dia2code
#ifndef RENDER__RECTTEXTE__H
#define RENDER__RECTTEXTE__H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

namespace render {

  /// class RectTexte - 
  class RectTexte {
    // Attributes
  public:
    sf::Text texte;
    sf::RectangleShape rect;
    sf::Font font;
    // Operations
  public:
    void ChangeText (const sf::String& txt);
    RectTexte ();
    ~RectTexte ();
  };

};

#endif
