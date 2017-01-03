// Generated by dia2code
#ifndef RENDER__RENDUGRILLE__H
#define RENDER__RENDUGRILLE__H

#include <mutex>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <vector>
#include <string>

namespace state {
  class Etat;
};
namespace render {
  class Parseur;
}

#include "Parseur.h"

namespace render {

  /// class RenduGrille - 
  class RenduGrille {
    // Attributes
  public:
    std::mutex mut_lvl;
  private:
    sf::VertexArray m_vertices;
    sf::Texture m_tileset;
  protected:
    std::vector<int> level;
    // Operations
  public:
    void dessin (sf::RenderTarget&  target, state::Etat* e);
    bool charger (const std::string& tileset, sf::Vector2u  tileSize, unsigned int  width, unsigned int  height);
    RenduGrille ();
    ~RenduGrille ();
    void changeTileset (char * fichier);
    void testChgtMap (state::Etat *  e);
  };

};

#endif
