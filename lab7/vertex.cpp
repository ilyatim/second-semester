#include <iostream>
#include <cstring>
#include "vertex.h"

using namespace std;

vertex::vertex(string _name)
{
  name = _name;
}
string vertex::getName()
{
  return name;
}
void vertex::setName(string _name)
{
  name = _name;
}
vertex::~vertex()
{

}
