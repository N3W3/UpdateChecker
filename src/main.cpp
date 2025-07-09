#include <iostream>
#include "Check.h"

int main(){
    Check c;
    bool result = c.isUpToDate();
    std::cout << "Address to search the Last version publish :" << std::endl;
    std::cout << c.getAddress() << std::endl;
    std::cout << "Actual version :" << std::endl;
    std::cout << c.getVersion() << std::endl;
    std::cout << "last Version :" << std::endl;
    std::cout << c.getLastVersion() << std::endl;

    return 1;
}
