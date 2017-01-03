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
}

#include "engine/Commande.h"

namespace client {

  /// class OperateurReseau - 
  class OperateurReseau {
    // Attributes
  public:
    std::vector<engine::Commande> in_cmd_list;
    std::vector<engine::Commande> out_cmd_list;
    std::mutex mut_in;
    std::mutex mut_out;
    sf::TcpSocket sender;
    sf::TcpListener listener;
    // Operations
  public:
    void th_in ();
    void th_out ();
    std::vector<engine::Commande> getCmd ();
    void putCmd (engine::Commande cmd);
    OperateurReseau ();
    ~OperateurReseau ();
  };

};

#endif
