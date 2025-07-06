#ifndef CHECK_H
#define CHECK_H

#include <string>

class Check{

    private:
      std::string address;
      double version;

    public:
      Check(std::string a, double version);
      std::string getAddress();
      double getVersion();
      bool isUpToDate();
};

#endif
