#include <iostream>

using namespace std;

int main(void)
{
    int i;
    int j;
    int n = 10;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<j<<" ";
            
        }
        
        cout<<endl;
        
    }
    

    return(0);
}