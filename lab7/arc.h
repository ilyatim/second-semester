#ifndef ARC_H
#define ARC_H

class arc
{
private:
  std::tuple <std::string, std::string, std::string> arc_;
public:
  arc(std::tuple <std::string, std::string, std::string> _tuple);
  std::string getTuple0();
  std::string getTuple1();
  std::string getTuple2();
  void setTuple0(std::string name);
  void setTuple1(std::string name);
  virtual ~arc();
};

#endif
