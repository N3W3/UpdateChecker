#include <iostream>
#include <Check.h>

bool main(){
    Check c();
    bool result = c.isUptodate();
    std::cout << result << std::endl;

    return result;
}
