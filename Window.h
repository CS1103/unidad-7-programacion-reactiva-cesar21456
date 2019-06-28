//
// Created by USUARIO on 28/06/2019.
//

#ifndef PC4_WINDOW_H
#define PC4_WINDOW_H
#include <vector>
#include <iostream>
#include "Component.h"
using namespace std;
class Component;
class Window {
    vector<Component*> controls;
public:
    void run();
    void addComponent(Component *component);
    void removeComponent(Component *component);

};


#endif //PC4_WINDOW_H
