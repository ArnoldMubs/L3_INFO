#include "Inventaire.hpp"

/* Sortie */

/*
std::ostream& operator <<( std::ostream& os, const Inventaire& inventaire){

 const_iterator it_bouteille;
  for (it_bouteille  = begin(); it_bouteille != end(); ++it_bouteille){
    os<< *it_bouteille;
  }
  
  return os;
}
*/

void Inventaire::trier(){
  std::sort(begin(),end());
}

std::ostream& operator <<( std::ostream& os, const Inventaire& inventaire){
  
  for (Bouteille bouteille :inventaire._bouteilles){
    os << bouteille;
  }
  
  return os;
}

/* Entree */

std::istream& operator <<( std::istream& is, const Inventaire& inventaire){
  
  std::string str;
  std::getline(is, str, ';');
  l._nom = str;
  std::getline(is, str, ';');
  l._date = str;
  std::getline(is, str, ';');
  l._volume = std::stoi(str);

  return (is); 
}
