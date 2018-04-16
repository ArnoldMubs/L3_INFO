#ifndef FIGUREGEOM_HPP_
#define FIGUREGEOM_HPP_
#include "Couleur.hpp"
#include "Point.hpp"
#include <gtkmm.h>
#include <cairo.h>

class FigureGeometrique {
 protected :
  Couleur _couleur;
 public :
  FigureGeometrique(const Couleur & couleur);
  const Couleur &  getCouleur () const ;
  virtual ~FigureGeometrique(){};
  virtual void afficher (const Cairo::RefPtr<Cairo::Context> cr)const = 0;  
  
};
#endif
