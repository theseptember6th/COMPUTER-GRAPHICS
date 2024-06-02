#include<graphics.h>
#include<direct.h>
#include<iostream>
using namespace std;

int main(){
    int gd=DETECT,gm,x;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd,&gm,data);
    line(100,100,400,400);
    setcolor(RED);
    line(80,90,350,450);
    cin>>x;  //to display graph till we enter something
    closegraph();
}
