#include <fstream>
#include <string>
#include <iostream>
#include "Check.h"
#include "curl/curl.h"

using namespace std;

Check::Check() {
    address = "https://github.com/N3W3/UpdateChecker/blob/ad314324b931f699632f62bc1159569e1d0e13be/data/version.txt";
    version = 1.0;
    lastVersion = 1.1;
}

/**
 *
 */
double Check::requestLastVersion(){
    CURL *curl;
    return 1.1;
}


bool Check::isUpToDate() {
    return version == lastVersion;
}

/**
 *Get the local version
 */
double Check::getVersion() {
    return version;
}

/**
 *
 */
double Check::getLastVersion(){
    return lastVersion;
}

/**
 *
 */
string Check::getAddress(){
    return address;
}
