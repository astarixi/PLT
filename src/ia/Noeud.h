// Generated by dia2code
#ifndef IA__NOEUD__H
#define IA__NOEUD__H

#include "../state.h"
#include <vector>

namespace state {
  class Element;
};
namespace ia {
  class Noeud;
};
namespace state {
  class ListeElements;
}

namespace ia {

  /// class Noeud - 
  class Noeud {
    // Attributes
  public:
    state::Element * lien;
    Noeud * pere;
    float f;
    int id;
    std::vector<Noeud *> fils;
    // Operations
  public:
    Noeud (Noeud * npere, int nid, state::Element * lien);
    ~Noeud ();
    void createFils (state::ListeElements& lp, int p);
    void setF (float nf);
    float getF ();
    int getID ();
    state::Element * getLien ();
  };

};

#endif
