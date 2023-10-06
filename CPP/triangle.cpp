#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
private:
    double base;
    double height;
    double hyp;
    double area;
    double perimeter;

public:
    Triangle();
    Triangle(int a, int b);
    void input();
    void compute();
    void output();
};

Triangle::Triangle()
{
    base = 0.0;
    height = 0.0;
}
Triangle::Triangle(int a, int b)
{
    a = base;
    b = height;

}
void Triangle::input()
{
    cout<<"Enter the base of your triangle :"<<" ";
    cin>>base;
    cout<<"Enter the height of your triangle :"<<" ";
    cin>>height;

}
void Triangle::compute()
{
    hyp = sqrt(pow(base, 2) + pow(height, 2));
    perimeter = base + height + hyp;
    area = (base * height)/2;
}
void Triangle::output()
{
    cout<<"The perimeter is: "<< perimeter<<endl;
    cout<<"The area is: "<<area<<endl;
}


int main(void)
{
    Triangle t1;
    t1.input();
    t1.compute();
    t1.output();
    return (0);
}

