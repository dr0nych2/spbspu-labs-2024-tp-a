#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <iostream>
#include <vector>

#include "figures.hpp"

namespace demin
{
  void doarea(const std::vector< Polygon > &polygons, std::istream &in, std::ostream &out);
  void domin(const std::vector< Polygon > &polygons, std::istream &in, std::ostream &out);
  void domax(const std::vector< Polygon > &polygons, std::istream &in, std::ostream &out);
  void count(const std::vector< Polygon > &polygons, std::istream &in, std::ostream &out);
  void lessArea(const std::vector< Polygon > & shapes, std::istream & in, std::ostream & out);
  void demin::doRightShapes(std::ostream& out, const std::vector< Polygon >& polygons);
}
#endif
