#include <iostream>
#include <GL/freeglut.h>

#include "sample.h"
#include "Object.h"
// Styleguide https://drake.mit.edu/styleguide/cppguide.html

void display()
{

//    sample s;
//    s.displayMe();
    std::string path = "../assets/obj/Wolf.fbx";
    Object blah;
    blah.Import(path);

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world :D");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}