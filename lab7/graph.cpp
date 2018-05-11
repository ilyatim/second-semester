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
bool Graph::notBusyArc(tuple <string, string, string> name)
{
  for(unsigned int i = 0; i < _arc.size(); i++)
  {
    if(((_arc[i].getTuple0() == get<0>(name)) && (_arc[i].getTuple1() == get<1>(name))) || (_arc[i].getTuple2() == get<2>(name)))
    {
      return false;
    }
  }
  return true;
}
//////////////////////////////////////
bool Graph::noExistingArc(tuple <string, string, string> name)
{
  for(unsigned int i = 0; i < _arc.size(); i++)
  {
    if((_arc[i].getTuple0() == get<0>(name)) && (_arc[i].getTuple1() == get<1>(name)) && (_arc[i].getTuple2() == get<2>(name)))
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
            if(_arc[j].getTuple0() == first_name)
              _arc[j].setTuple0(second_name);
            if(_arc[j].getTuple1() == first_name)
              _arc[j].setTuple1(second_name);
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
      if((_arc[i].getTuple0() == name) || (_arc[i].getTuple1() == name))
      {
        _arc[i] = _arc[_arc.size() - 1];
        _arc.pop_back();
      }

    }
  }
}
//////////////////////////////////////
void Graph::addArc(string name1, string name2, string name)
{
  auto _tuple = make_tuple(name1, name2, name);
  if(notBusyArc(_tuple) && !(noExistingVertex(name1)) && !(noExistingVertex(name2)))
  {
    _arc.push_back(Arc(_tuple));
  }
  else
  {
    cout << endl;
    cout << "arc from such vertices either exists or cannot be created" << endl;
    cout << "check the correctness of the input data" << endl;
  }
}
//////////////////////////////////////
void Graph::deleteArc(string name1, string name2, string name3)
{
  auto _tuple = make_tuple(name1, name2, name3);
  if((noExistingArc(_tuple)))
    cout << "not exist" << endl;
  else
  {
    unsigned int i = 0;
    while(_arc[i].getTuple2() != name3)
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
      if(_arc[i].getTuple0() == name)
        {
          cout << "outgoing arc " << i + 1 << " is - ";
          cout << _arc[i].getTuple2() << endl;
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
      if(_arc[i].getTuple1() == name)
        {
          cout << "ingoing arc " << i + 1 << " is - ";
          cout << _arc[i].getTuple2() << endl;
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
//        ostream & operator<<(ostream & os, Graph & Graph)
//        {
//          os << Graph._vertex.size() << endl;
//          for(unsigned int i = 0; i < Graph._vertex.size(); i++)
//          {
//            os << Graph._vertex[i].getName() << " ";
//          }
//          return os;
//        }
//////////////////////////////////////
Graph::~Graph()
{

}
