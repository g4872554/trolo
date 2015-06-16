#include <iostream>
#include "SYS.h"

using std::endl;
using std::cout;
using std::cin;

void wypisz(int &l){
    cout << l++ << endl;
}

int main(int argc, char * argv[]) {
    //SYS s1;
    cout << "Janusz: " << endl;
    int val = 6;
    wypisz(val);
    wypisz(val);

    cout << val << endl;
    return 0;
}
