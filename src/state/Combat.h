// Generated by dia2code
#ifndef COMBAT__H
#define COMBAT__H

/// class Combat - 
class Combat {
  // Attributes
protected:
  int timerDebutTour;
  std::vector<int> listeTour;
  int tourActuel;
  // Operations
public:
  Combat ();
  ~Combat ();
  void createListe (ListeElements listePersonnages);
  void tourSuivant (int clk);
  int getTimerDebutTour ();
};

#endif
