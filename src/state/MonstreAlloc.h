// Generated by dia2code
#ifndef STATE__MONSTREALLOC__H
#define STATE__MONSTREALLOC__H


namespace state {
  class Element;
  class IElementAlloc;
}

#include "IElementAlloc.h"

namespace state {

  /// class MonstreAlloc - 
  class MonstreAlloc : public state::IElementAlloc {
    // Attributes
  protected:
    int id;
    // Operations
  public:
    MonstreAlloc (int id);
    Element* newInstance ();
  };

};

#endif