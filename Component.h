//
// Created by USUARIO on 28/06/2019.
//

#ifndef PC4_COMPONENT_H
#define PC4_COMPONENT_H
#include "Event.h"
#include <functional>
#include "Window.h"

using namespace std;
class Component {
protected:
    function<void(Event)> clickEvent;
    function<void(Event)> mouseMoveEvent;
//private:
    //Window parent; :"u
public:
    virtual void OnClick(function<void(Event)>)=0;
    virtual void onMouseMove(function<void(Event)>)=0;
    virtual void draw()=0;
    virtual void get_all()=0;
};


#endif //PC4_COMPONENT_H
