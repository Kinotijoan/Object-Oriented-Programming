#include <iostream>

using namespace std;

int sum(int a, int b);
float sum(float a, float b);

int main(void)
{
    int num1 = 5;
    int num2 = 7;
    float num3 = 5.5;
    float num4 = 7.5;
    
    cout<<sum(num1, num2)<<endl;
    cout<<sum(num3, num4)<<endl;
    return (0);
}
int sum(int a, int b)
{
    int s;
    s = a + b;
    return s;
}
float sum(float a, float b)
{
    float s;
    s = a + b;
    return s;
}