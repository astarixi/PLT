// Generated by dia2code
#ifndef STATE__ACCESALLOC__H
#define STATE__ACCESALLOC__H


namespace state {
  class Element;
  class IElementAlloc;
}

#include "IElementAlloc.h"

namespace state {

  /// class AccesAlloc - 
  class AccesAlloc : public state::IElementAlloc {
    // Attributes
  protected:
    int id;
    // Operations
  public:
    AccesAlloc (int id);
    Element* newInstance ();
  };

};

#endif