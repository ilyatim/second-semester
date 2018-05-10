#include <iostream>
#include <cstring>
#include <tuple>
#include "arc.h"

using namespace std;

arc::arc(tuple <string, string, string> _tuple)
{
    arc_ = _tuple;
}
string arc::getTuple0()
{
  string arc1 = get<0>(arc_);
  return arc1;
}
string arc::getTuple1()
{
  string arc1 = get<1>(arc_);
  return arc1;
}
string arc::getTuple2()
{
  string arc1 = get<2>(arc_);
  return arc1;
}
void arc::setTuple0(string name)
{
  get<0>(arc_) = name;
}
void arc::setTuple1(string name)
{
  get<1>(arc_) = name;
}
arc::~arc()
{

}
