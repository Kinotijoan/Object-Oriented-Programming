#include <iostream>
#include <math.h>
#define PIE 3.142

using namespace std;

float areaSphere(double r);
float volumeSphere(double r);
float areaCylinder(double r, double h);
float volumeCylinder(double r, double h);

int main (void)
{
    double rad;
    double radius;
    double height;

    cout<<"Enter the radius for the sphere :";
    cin>>rad;
    cout<<"Enter the radius for the cylinder :";
    cin>>radius;
    cout<<"Enter the height :";
    cin>>height;

    cout<<"The area of the sphere is :"<<areaSphere(rad)<<endl;
    cout<<"The volume of the sphere is :"<<volumeSphere(rad)<<endl;
    cout<<"The area of the cylinder is :"<<areaCylinder(radius, height)<<endl;
    cout<<"The volume of the cylinder is :"<<volumeCylinder(radius, height)<<endl;
    return (0);
}

float areaSphere(double r)
{
    float area = 4 * PIE * pow(r, 2); 
    return area;
}

float volumeSphere(double r)
{
    float volume = (4/3) * PIE * pow(r, 3); 
    cout<<PIE<<endl;
    return volume;
}

float areaCylinder(double r, double h)
{
    float area = 2 * PIE * r  * (r + h); 
    return area;
}
float volumeCylinder(double r, double h)
{
    float volume= PIE * pow(r, 2) * h; 
    return volume;
}