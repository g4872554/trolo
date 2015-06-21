#include "my_app.h"


void my_app::render(double currentTime) {
// Simply clear the window with red
    static const GLfloat red[] = { 1.0f, 0.0f, 0.0f, 1.0f };
    glClearBufferfv(GL_COLOR, 0, red);
}