#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

Graph::Graph()
{

}
//////////////////////////////////////
Graph & Graph::operator =(const Graph & graph)
{
    _vertex.clear();
    _vertex = graph._vertex;
    return *this;
}
//////////////////////////////////////
Graph::Graph(const Graph &graph)
{
    _vertex.clear();
    _vertex = graph._vertex;
}
//////////////////////////////////////
bool Graph::noExistingVertex(string name)
{
  for(unsigned int i = 0; i < _vertex.size(); i++)
  {
    if(_vertex[i].getName() == name)
    {
      return false;
    }
  }
  return true;
}
//////////////////////////////////////
bool Graph::notBusyArc(string name1, string name2, string name3)
{
  for(unsigned int i = 0; i < _arc.size(); i++)
  {
    if(((_arc[i].getName1() == name1) && (_arc[i].getName2() == name2)) ||
        (_arc[i].getName3() == name3) ||
       ((_arc[i].getName1() == name2) && (_arc[i].getName2() == name1)))
    {
      return false;
    }
  }
  return true;
}
//////////////////////////////////////
bool Graph::noExistingArc(string name1, string name2, string name3)
{
  for(unsigned int i = 0; i < _arc.size(); i++)
  {
    if((_arc[i].getName1() == name1) && (_arc[i].getName2() == name2) && (_arc[i].getName3() == name3))
    {
      return false;
    }
  }
  return true;
}
//////////////////////////////////////
void Graph::addVertex(string name)
{
  if(noExistingVertex(name))
  {
    _vertex.push_back(Vertex(name));
  }
  else
  {
    cout << "this vertex already exists" << endl;
  }
}
//////////////////////////////////////
void Graph::renameVertex(string first_name, string second_name)
{
  if(noExistingVertex(first_name))
  {
    cout << "such vertex does not exist" << endl;
  }
  else
  {
    if(!(noExistingVertex(second_name)))
    {
      cout << "this vertex already exists" << endl;
    }
    else
    {
      unsigned int i;
      for(i = 0; i < _vertex.size(); i++)
      {
        if(_vertex[i].getName() == first_name)
        {
          _vertex[i].setName(second_name);
          for(unsigned int j = 0; j < _arc.size(); j++)
          {
            if(_arc[j].getName1() == first_name)
              _arc[j].setName1(second_name);
            if(_arc[j].getName2() == first_name)
              _arc[j].setName2(second_name);
          }
        }
      }
    }
  }
}
//////////////////////////////////////
void Graph::printAllVertex()
{
  if (!(_vertex.size()))
  {
    cout << "missing vertices" << endl;
  }
  else
  {
    cout << endl;
    for(unsigned int i = 0; i < _vertex.size(); i++)
    {
      cout << "this is the vertex " << i + 1 << "  -  ";
      cout << _vertex[i].getName() << endl;
    }
    cout << endl;
  }
}
//////////////////////////////////////
void Graph::deleteVertex(string name)
{
  if(noExistingVertex(name))
  {
    cout << "not exist" << endl;
  }
  else
  {
    unsigned int i = 0;
    while(_vertex[i].getName() != name)
    {
      i++;
    }
    _vertex[i] = _vertex[_vertex.size() - 1];
    _vertex.pop_back();
    for(i = 0; i < _arc.size(); i++)
    {
      if((_arc[i].getName1() == name) || (_arc[i].getName2() == name))
      {
        _arc[i] = _arc[_arc.size() - 1];
        _arc.pop_back();
      }
    }
  }
}
//////////////////////////////////////
void Graph::addArc(string name1, string name2, string name3)
{
  if(notBusyArc(name1, name2, name3) && !(noExistingVertex(name1)) && !(noExistingVertex(name2)))
  {
    _arc.push_back(Arc(name1, name2, name3));
  }
  else
  {
    cout << endl;
    cout << "arc from such vertices either exists or cannot be created because a vertex with this name already exists" << endl;
    cout << "check the correctness of the input data" << endl;
  }
}
//////////////////////////////////////
void Graph::deleteArc(string name1, string name2, string name3)
{
  if((noExistingArc(name1, name2, name3)))
    cout << "not exist" << endl;
  else
  {
    unsigned int i = 0;
    while(_arc[i].getName3() != name3)
    {
      i++;
    }
    _arc[i] = _arc[_arc.size() - 1];
    _arc.pop_back();
  }
}
//////////////////////////////////////
void Graph::outgoingArcs(string name)
{
  if(!(noExistingVertex(name)))
  {
    unsigned int i;
    int counter = 0;
    for(i = 0; i < _arc.size(); i++)
    {
      if(_arc[i].getName1() == name)
        {
          cout << "outgoing arc " << i + 1 << " is - ";
          cout << _arc[i].getName3() << endl;
          counter++;
        }
    }
    if(!counter)
    {
      cout << "this vertex has no outgoing arcs" << endl;
    }
  }
  else
  {
    cout << "exists vertex" << endl;
  }
}
//////////////////////////////////////
void Graph::ingoingArcs(string name)
{
  if(!(noExistingVertex(name)))
  {
    unsigned int i;
    int counter = 0;
    for(i = 0; i < _arc.size(); i++)
    {
      if(_arc[i].getName2() == name)
        {
          cout << "ingoing arc " << i + 1 << " is - ";
          cout << _arc[i].getName3() << endl;
          counter++;
        }
    }
    if(!counter)
    {
      cout << "this vertex has no ingoing arcs" << endl;
    }
  }
  else
  {
    cout << "exists vertex" << endl;
  }
}
//////////////////////////////////////
ostream & operator<<(ostream & os, Graph & graph)
{
  os << graph._vertex.size() << endl;
  for(unsigned int i = 0; i < graph._vertex.size(); i++)
  {
    os << graph._vertex[i].getName() << " " ;
  }
  os << endl;
  os << graph._arc.size() << endl;
  for(unsigned int i = 0; i < graph._arc.size(); i++)
  {
    os << graph._arc[i].getName1() << " " << graph._arc[i].getName2() << " "  << graph._arc[i].getName3() << endl;
  }
  return os;
}
//////////////////////////////////////
istream & operator>>(istream & is, Graph & graph)
{
  graph._vertex.clear();
  graph._arc.clear();
  unsigned int sizeVertex;
  is >> sizeVertex;
  for(unsigned int i = 0; i < sizeVertex; i++)
  {
    string name;
    is >> name;
    graph._vertex.push_back(Vertex(name));
  }
  unsigned int sizeArc;
  is >> sizeArc;
  for(unsigned int i = 0; i < sizeArc; i++)
  {
    string name1, name2, name3;
    is >> name1 >> name2 >> name3;
    graph._arc.push_back(Arc(name1, name2, name3));
  }
  return is;
}
//////////////////////////////////////
Graph::~Graph()
{

}
