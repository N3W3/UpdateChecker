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
      bool isUpToDate();
      double requestLastVersion();
      double getVersion();
      double getLastVersion();
      std::string getAddress();
      std::string setAddress();
};

#endif
