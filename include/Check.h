#ifndef CHECK_H
#define CHECK_H

#include <string>

class Check{

    private:
      std::string address;
      double version;
      double lastVersion;

    public:
      Check();
      std::string getAddress();
      double getVersion();
      double getLastVersion();
      std::string setAddress();
      bool isUpToDate();
};

#endif
