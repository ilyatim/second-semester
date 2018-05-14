#include <iostream>
#include <cstring>
#include <tuple>
#include "arc.h"

using namespace std;

Arc::Arc(string name_1, string name_2, string name_of_arc)
{
    nameVertexInitial = name_1;
    nameVertexFinal = name_2;
    nameArc = name_of_arc;
}
string Arc::getName1()
{
  return nameVertexInitial;
}
string Arc::getName2()
{
  return nameVertexFinal;
}
string Arc::getName3()
{
  return nameArc;
}
void Arc::setName1(string name)
{
  nameVertexInitial = name;
}
void Arc::setName2(string name)
{
  nameVertexFinal = name;
}
Arc::~Arc()
{

}
