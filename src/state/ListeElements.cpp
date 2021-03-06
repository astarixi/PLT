#include "ListeElements.h"
#include <iostream>
#include "../state.h"

using namespace state;

ListeElements::ListeElements (Etat* etat) {
	this->etat = etat;
	factory = new ElementFactory();
	soldatInconnu = new Heros (0, 0,0);
}

ListeElements::~ListeElements () {
	;
}

int ListeElements::size () {
	return (this->elements).size();
}

Element * ListeElements::getElement (int n) {
    if(n >= elements.size()) {
        std::cout << "no such element " << n << " / " << elements.size() << std::endl;
    }

	try {
		return (elements).at(n);
	}
	catch (const std::out_of_range& oor) {
		std::cerr << "ListeElements::getElement : Capture" << std::endl;
		return soldatInconnu;
	}
}

void ListeElements::setElement (int i, Element * e) {
    (this->elements).at(i) = e;
}

void ListeElements::ajoutElement (char e) {
	Element * ne = factory->newInstance(e);
	ne->setEtat(etat);
	elements.push_back (ne);
}

void ListeElements::ajoutElement (Element * e) {
	elements.push_back (e);
}

bool const ListeElements::isPerso (int i, int j){
    for(size_t k=0; k < elements.size(); k++){
        if(this->getElement(k)->getX() == i && this->getElement(k)->getY() == j){
            if(this->getElement(k)->getTypeID() == PERSO || this->getElement(k)->getTypeID() == MONSTRE){
                return true;
            }
        }
    }
    
    return false;
}

Statique * ListeElements::getTile (int n) {
	// TODO: insert return statement here
	
	Element * o = getElement(n);
	
	o->accepte (visiteur);
	TypeID a = o->getTypeID();
	
	if (a == TypeID(VIDE)) 
		return (Statique *)(visiteur.getpVide ());
	else  
		return (Statique *)(visiteur.getpAcces ());
}

void ListeElements::clear() {
	for (int i = 0; i < elements.size(); ++i)
		delete elements.at(i);
	elements.clear();
}

void ListeElements::eraseElem(int i) {
	delete elements.at(i);
	elements.erase(elements.begin() + i);
}

Etat* ListeElements::getEtat(){
    return etat;
}
