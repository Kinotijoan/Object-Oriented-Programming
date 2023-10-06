#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct student 
{
    string name;
    int age;
    float marks;
    struct student *next;
}student_t;