// Generated by dia2code
#ifndef IA__ARBRE__H
#define IA__ARBRE__H


namespace ia {
  class Noeud;
};
namespace state {
  class ListeElements;
}

#include "Noeud.h"

namespace ia {

  /// class Arbre - 
  class Arbre {
    // Associations
    // Attributes
  protected:
    int profondeur;
    Noeud * Racine;
    // Operations
  public:
    Arbre ();
    ~Arbre ();
    /// 	
    /// @param lp		(???) 
    /// @param npro		(???) 
    void creerArbre (state::ListeElements& lp, int npro);
    int MinMax (bool heros);
  };

};

#endif
