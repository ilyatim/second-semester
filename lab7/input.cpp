#include <iostream>
#include <cstring>
#include <fstream>
#include "input.h"

using namespace std;
bool input(Graph &graph)
{
  inform();
  int choice;
  cin >> choice;
  switch(choice)
  {
    case 1:
    {
      cout << "enter name of vertex " << endl;
      string name;
      cin >> name;
      graph.addVertex(name);
      break;
    }
    case 2:
    {
      cout << "enter name of vertex would u like to rename" << endl;
      string name1, name2;
      cin >> name1;
      cout << "enter new name" << endl;
      cin >> name2;
      graph.renameVertex(name1, name2);
      break;
    }
    case 3:
    {
      graph.printAllVertex();
      break;
    }
    case 4:
    {
      cout << "enter name of vertex would u like to delete" << endl;
      string name;
      cin >> name;
      graph.deleteVertex(name);
      break;
    }
    case 5:
    {
      string name1,name2;
      cout << "specify two vertices between which you want to draw an arc" << endl;
      cout << "enter the vertex from which you want to draw the arc" << endl;
      cin >> name1;
      cout << "enter the vertex to which you want to draw the arc" << endl;
      cin >> name2;
      cout << "enter the name of arc" << endl;
      string arc;
      cin >> arc;
      graph.addArc(name1, name2, arc);
      break;
    }
    case 6:
    {
      cout << "enter name of arc would u like to delete" << endl;
      string nameOfArc;
      cin >> nameOfArc;
      cout << "enter the two vertices between which you want to remove the arc" << endl;
      string nameVertex1, nameVertex2;
      cin >> nameVertex1 >> nameVertex2;
      graph.deleteArc(nameVertex1, nameVertex2, nameOfArc);
      break;
    }
    case 7:
    {
      cout << "specify the path to the file in which you want to save the graph" << endl;
      string name;
      cin >> name;
      ifstream fromfile;
      fromfile.open(name);
      if(fromfile.is_open())
      {
        fromfile.read((char*)&graph, sizeof(graph));
      }
      fromfile.close();
      break;
    }
    case 8:
    {
      cout << "specify the path to the file in which you want to save the graph" << endl;
      string name;
      cin >> name;
      ofstream infile;
      infile.open(name);
      if(infile.is_open())
      {
        infile.write((char*)&graph, sizeof(graph));
      }
      infile.close();
      break;
    }
    case 9:
    {
      cout << "enter the vertex of the outgoing arcs you want to print" << endl;
      string nameVertex;
      cin >> nameVertex;
      graph.outgoingArcs(nameVertex);
      break;
    }
    case 10:
    {
      cout << "enter the vertex of the ingoing arcs you want to print" << endl;
      string nameVertex;
      cin >> nameVertex;
      graph.ingoingArcs(nameVertex);
      break;
    }
    default:
    {
      cout << "exit from program" << endl;
      return false;
      break;
    }
  }
  return true;
}
