// wap to read the coordinates of two points abnd calculate the dustance between them as per following formula
// d=((x1-x2)^2 + (y1-y2)^2)^(1/2)

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

double calc_distance(double x1, double x2, double y1, double y2){
    double distance;
    distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return distance;
}

int main(){
    system("CLS");
    // cout<<"distance="<<calc_distance(5,2,6.5,4.1)<<endl;
    cout<<"distance="<<calc_distance(5,2,6,4)<<endl;
    return 0;    
}