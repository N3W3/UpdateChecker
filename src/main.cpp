#include <iostream>
#include "Check.h"

using namespace std;

int main(){
    Check c;

    bool result = c.isUpToDate();
    cout << "Address to search the Last version publish :" << endl;
    cout << c.getAddress() << endl;
    cout << "Actual version :" << endl;
    cout << c.getVersion() << endl;
    cout << "Last Version :" << endl;
    cout << c.getLastVersion() << endl;

    cout << "Is upToDate :" << endl;
    cout << c.isUpToDate() << endl;





    return 0;
}
