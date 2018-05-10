#ifndef ARC_H
#define ARC_H

class Arc
{
private:
  std::tuple <std::string, std::string, std::string> arc_;
public:
  Arc(std::tuple <std::string, std::string, std::string> _tuple);
  std::string getTuple0();
  std::string getTuple1();
  std::string getTuple2();
  void setTuple0(std::string name);
  void setTuple1(std::string name);
  virtual ~Arc();
};

#endif
