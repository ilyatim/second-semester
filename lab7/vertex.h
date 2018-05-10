#ifndef VERTEX_H
#define VERTEX_H

class Vertex
{
private:
  std::string name;
public:
  Vertex(std::string _name);
  std::string getName();
  void setName(std::string _name);
  virtual ~Vertex();

};

#endif
