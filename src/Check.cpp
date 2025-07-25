#include <string>
#include <iostream>
#include "Check.h"
#include "curl/curl.h"

using namespace std;

/**
*
*/
Check::Check() {
    // Setting the github raw file where the version file is stored
    address = "https://raw.githubusercontent.com/N3W3/UpdateChecker/ad314324b931f699632f62bc1159569e1d0e13be/data/version.txt";
    version = 1.0;
    lastVersion = requestLastVersion();
}

/**
 * Callback to write response data
 */
size_t Check::write_callback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t totalSize = size * nmemb;
    output -> append((char*)contents, totalSize);
    return totalSize;
}

/**
 *
 */
double Check::requestLastVersion(){
    //Initialising the CURL structure
    CURL *curl = curl_easy_init();
    std::string res;

    if(curl){
        // Setting options
        curl_easy_setopt(curl, CURLOPT_URL, address.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L); // Handle redirects
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &res);

        CURLcode code = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if ( code == CURLE_OK ){
            return stod(res);
        }
    }
    return 0;
}


/**
 *
 */
bool Check::isUpToDate() {
    return version==lastVersion;
}

/**
 *Get the local version
 */
double Check::getVersion() {
    return version;
}

/**
 * Last version attribut's get
 */
double Check::getLastVersion(){
    return lastVersion;
}

/**
 * Raw file adress getter
 */
string Check::getAddress(){
    return address;
}
