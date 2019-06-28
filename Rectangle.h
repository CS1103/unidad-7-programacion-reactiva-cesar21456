//
// Created by USUARIO on 28/06/2019.
//

#ifndef PC4_RECTANGLE_H
#define PC4_RECTANGLE_H
#include "Component.h"

class Rectangle: public Component  {
    int x,y;
    int width,height;
public:
    Rectangle(int x1,int y1,int width1,int height1):x(x1),y(y1),width(width1),height(height1){};
    Rectangle()= default;
    void get_all()override{
        cout<<x<<endl<<y<<endl<<width<<endl<<height<<endl;
    }
    void OnClick(function<void(Event)>)override{}
    void onMouseMove(function<void(Event)>)override{}
    void draw()override{}
};


#endif //PC4_RECTANGLE_H
