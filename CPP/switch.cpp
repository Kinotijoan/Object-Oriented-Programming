#include <iostream>

using namespace std;

int main(void)
{
    char vowel;
    cout<<"Enter a character : ";
    cin>>vowel;

    switch (vowel)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"This is a vowel.";
        break;
    
    default:
        cout<<"This is not a vowel.";
        break;
    }
    return (0);
}