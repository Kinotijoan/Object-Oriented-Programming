#include <iostream>

using namespace std;

int main(void)
{
    int arr[10];
    int i;
    for(i = 1; i <= 10; i++)
    {
        cout<<"Enter number : "<<i<<" ";
        cin>>arr[i-1];
    }
    cout<<"The numbers are :"<<endl;
    for(i = 1; i <= 10; i++)
    {
        cout<<arr[i-1]<<" ";
    }
    

    return (0);
}
/*int min_value(int a[])
{
    int min;
    int i;
    for(i = 0; i <; i++)
    {
        min = a[i];
        if(a[i]>a[i+1])
        {
            min = a[i +1];
        }
    }
    return min;
}*/