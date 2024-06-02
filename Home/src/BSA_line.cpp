#include <graphics.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd ,&gm , data);

    float x1,y1,x2,y2,p,dy,dx,x , y ;
    cout<<"enter the first coordinate of line ";
    cin>>x1>>y1;
    cout<<"enter the last coordinate of line ";
    cin>>x2>>y2;
    dx = x2 - x1;
    dy = y2 - y1;

    p = 2*dy - dx;

    x = x1;
    y = y1;

    putpixel(x , y ,RED);
    for( int i = 0 ; i < dx; i ++){
        y++;
        if(p>0){
            p = p + 2*dx -2*dy;
            x++;
            
        }
        else {

            p = p + 2*dx;
             
        }
        putpixel(x , y ,RED);
        delay(200);
        
    }
    closegraph();
    cin.ignore();
    cin.get();

}