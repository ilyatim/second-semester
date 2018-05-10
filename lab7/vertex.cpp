#include <iostream>
#include <cstring>
#include "vertex.h"

using namespace std;

Vertex::Vertex(string _name)
{
  name = _name;
}
string Vertex::getName()
{
  return name;
}
void Vertex::setName(string _name)
{
  name = _name;
}
Vertex::~Vertex()
{

}
