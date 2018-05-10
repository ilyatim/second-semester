#ifndef VERTEX_H
#define VERTEX_H

class vertex
{
private:
  std::string name;
public:
  vertex(std::string _name);
  std::string getName();
  void setName(std::string _name);
  virtual ~vertex();

};

#endif
