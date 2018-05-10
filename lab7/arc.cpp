#include <iostream>
#include <cstring>
#include <tuple>
#include "arc.h"

using namespace std;

Arc::Arc(tuple <string, string, string> _tuple)
{
    arc_ = _tuple;
}
string Arc::getTuple0()
{
  string arc1 = get<0>(arc_);
  return arc1;
}
string Arc::getTuple1()
{
  string arc1 = get<1>(arc_);
  return arc1;
}
string Arc::getTuple2()
{
  string arc1 = get<2>(arc_);
  return arc1;
}
void Arc::setTuple0(string name)
{
  get<0>(arc_) = name;
}
void Arc::setTuple1(string name)
{
  get<1>(arc_) = name;
}
Arc::~Arc()
{

}
