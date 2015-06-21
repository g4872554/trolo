#ifndef MY_APP_H
#define MY_APP_H
#include "sb6.h"
#include <iostream>
#include "SYS.h"

// Derive my_app from sb6::application
class my_app : public sb6::application
{
public:
    my_app(){cout << "dupa" << endl;}
    virtual ~my_app(){cout << "po dupie" << endl;}

    void render(double currentTime);
};

#endif //MY_APP_H
