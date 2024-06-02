#include<graphics.h>
#include<direct.h>
#include<iostream>
using namespace std;

int main(){
    int gd=DETECT,gm,x;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd,&gm,data);
    line(100,100,200,100);
    setlinestyle(SOLID_LINE,0,THICK_WIDTH);
    line(100,150,200,150);
    setlinestyle(DOTTED_LINE,0,1);
    line(100,180,200,180);
    setlinestyle(DASHED_LINE,0,1);
    line(100,200,200,200);
    setlinestyle(USERBIT_LINE,0xADC7,1);
    line(100,230,200,230);


    cin>>x;  //to display graph till we enter something
    closegraph();
}