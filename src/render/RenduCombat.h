// Generated by dia2code
#ifndef RENDER__RENDUCOMBAT__H
#define RENDER__RENDUCOMBAT__H

#include <SFML/Graphics.hpp>

namespace render {
  class RenduType;
  class RectTexte;
  class CerTexte;
}

#include "RenduType.h"
#include "RectTexte.h"
#include "CerTexte.h"

namespace render {

  /// class RenduCombat - 
  class RenduCombat {
    // Associations
    // Attributes
  public:
    RenduType IconeAttaqueDist;
    RenduType IconeAttaqueCAC;
    RectTexte IconePA;
    RectTexte IconePM;
    CerTexte IconeVie;
    sf::CircleShape IconeTemps;
    sf::CircleShape IconeTourSuiv;
    // Operations
  public:
    void dessin (sf::renderWindow w, etat* e, int id);
    RenduCombat ();
    ~RenduCombat ();
  };

};

#endif