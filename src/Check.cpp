#include <fstream>
#include <string>
#include <iostream>
#include "Check.h"

using namespace std;

Check::Check() {
    address = setAddress();
    version = 1.0;
    lastVersion = 1.1;
}


bool Check::isUpToDate() {
    return version >= 1.0;
}

/**
 * get the server address to check the version between local and heberged
 *
 *  @return string corresponding to the server address
 */
string Check::setAddress() {
    string line;
    ifstream file ("data/address.txt");
    if(file.is_open()){
        getline(file, line);
        file.close();
        return line;
    }
    else{
        line = "Error : Impossible to find the address file";
    }

    return line;
}

/**
 *Get the local version  */
double Check::getVersion() {
    return version;
}

double Check::getLastVersion(){
    return lastVersion;
}

string Check::getAddress(){
    return address;
}
