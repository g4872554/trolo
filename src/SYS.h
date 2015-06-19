#ifndef SYS_H
#define SYS_H

#include <iostream>

using namespace std;

class SYS {
private:
    static const int dupa = 42;


public:
    explicit SYS() {cout << "\nnew dupa\n";};

    virtual ~SYS() {cout << "end dupa = " << dupa << endl; };
};


#endif //SYS_H