#include <iostream>
#include "SYS.h"
#include "sb6.h"


// Derive my_application from sb6::application
class my_application : public sb6::application
{
public:
// Our rendering function
    void render(double currentTime)
    {
// Simply clear the window with red
        static const GLfloat red[] = { 1.0f, 0.0f, 0.0f, 1.0f };
        glClearBufferfv(GL_COLOR, 0, red);
    }
};


DECLARE_MAIN(my_application);
