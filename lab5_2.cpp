#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
    double rad = x*M_PI/180;
    return rad;
}

double rad2deg(double x){
    double deg = x*180/M_PI;
    return deg;
}

double findXComponent(double l1,double l2,double r1,double r2){
    double xcomp = (l1*cos(r1))+(l2*cos(r2));
    return xcomp;
}

double findYComponent(double l1,double l2,double r1,double r2){
    double ycomp = (l1*sin(r1))+(l2*sin(r2));
    return ycomp;
}

double pythagoras(double x,double y){
    double pytha = sqrt(pow(x,2)+pow(y,2));
    return pytha;
}

void showResult(double l , double y){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << 
    "\nLength of the resultant vector = " << l <<
    "\nDirection of the resultant vector (deg) = " << y <<
    "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ";

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
