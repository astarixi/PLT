// Generated by dia2code
#ifndef CLIENT__OPERATEURRESEAU__H
#define CLIENT__OPERATEURRESEAU__H

#include <vector>
#include <mutex>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

namespace engine {
  class Commande;
};
namespace state {
  class Etat;
}

#include "engine/Commande.h"

namespace client {

  /// class OperateurReseau - 
  class OperateurReseau {
    // Attributes
  protected:
    std::vector<engine::Commande> in_cmd_list;
    std::vector<engine::Commande> out_cmd_list;
    std::vector<engine::Commande> in_th_buf;
    std::mutex mut_in;
    std::mutex mut_out;
    sf::TcpSocket sender;
    bool active;
    int epoque_locale;
    state::Etat * e;
    // Operations
  public:
    void th_in ();
    void th_out ();
    std::vector<engine::Commande> getCmd ();
    void putCmd (engine::Commande cmd);
    OperateurReseau (state::Etat * ne);
    ~OperateurReseau ();
    void run ();
  };

};

#endif