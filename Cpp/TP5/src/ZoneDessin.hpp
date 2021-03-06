#ifndef ZONEDESSIN_HPP_
#define ZONEDESSIN_HPP_
#include <gtkmm.h>
#include "FigureGeometrique.hpp"
class ZoneDessin : public Gtk::DrawingArea {
 protected :
  std::vector<FigureGeometrique*> _figures;
 public :
  ZoneDessin();
  ~ZoneDessin();
  protected :
  bool on_expose_event(GdkEventButton* event);
  bool gererClic(GdkEventButton* event);
};
#endif
