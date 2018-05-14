#ifndef ARC_H
#define ARC_H

class Arc
{
private:
  std::string nameVertexInitial;
  std::string nameVertexFinal;
  std::string nameArc;
public:
  Arc(std::string name1, std::string name2, std::string nameofArc);
  std::string getName1();
  std::string getName2();
  std::string getName3();
  void setName1(std::string name);
  void setName2(std::string name);
  virtual ~Arc();
};

#endif
