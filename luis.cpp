#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    
    double deltax = 0.01;
    double deltat = 0.01;
    double L = 1.0;
    double tmax = 6.0;
    double C = 0.5;
    double t = 0;
    double u = 0;
    double Lnum,tnum,d2u;
    double uant=0;
    
    Lnum = (L/deltax) + 1;
    tnum = (tmax/deltat) + 1;
    
    
    
    for(i=0;i<tnum;i++){
        cout<<u<<" "<<t<<" "<<endl;
        u = u -((1.0/(c**2))*((u-uant)/deltax))*(t**2.0);
        uant=u;
        t=t+deltat;
        
    }
}