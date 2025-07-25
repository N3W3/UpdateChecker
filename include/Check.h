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
      static size_t write_callback(void* contents, size_t size, size_t nmemb, std::string* output);

  };
#endif
