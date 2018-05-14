#ifndef GRAPH_H
#define GRAPH_H
#include <cstring>
#include <vector>
#include <tuple>
#include "vertex.h"
#include "arc.h"
class Graph
{
private:
  std::vector <Vertex> _vertex;
  std::vector <Arc> _arc;
  bool noExistingVertex(std::string name);
  bool notBusyArc(std::string name1, std::string name2, std::string name3);
  bool noExistingArc(std::string name1, std::string name2, std::string name3);

public:
  Graph();
  Graph & operator=(const Graph & graph);
  Graph(const Graph &graph);
  void addVertex(std::string name);
  void renameVertex(std::string first_name, std::string second_name);
  void printAllVertex();
  void deleteVertex(std::string _name);
  void addArc(std::string name1, std::string name2, std::string name3);
  void deleteArc(std::string name1, std::string name2, std::string name3);
  void outgoingArcs(std::string name);
  void ingoingArcs(std::string name);
  friend std::ostream & operator<<(std::ostream & os, Graph & graph);
  friend std::istream & operator>>(std::istream & is, Graph & graph);
  virtual ~Graph();
};
std::ostream & operator<<(std::ostream & os, Graph & graph);
std::istream & operator>>(std::istream & is, Graph & graph);
#endif
