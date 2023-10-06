#include "main.hpp"

using namespace std;

student_t *newstudent(string name, int age, float marks);

int main(void)
{
    student_t *head = (student_t*)malloc(sizeof(student_t)); 
    student_t *std1=newstudent("Joan", 19, 65);
    head = std1;
    student_t *std2=newstudent("kio", 19, 65);
    head->next = std2;

    cout << head->name;

    return (0);
}

student_t *newstudent(string name, int age, float marks)
{
    student_t *ptr=(student_t*)malloc(sizeof(student_t));

    if (ptr == NULL)
        return (NULL);
    
    ptr ->name = name;
    ptr -> age = age;
    ptr -> marks = marks;


    return (ptr);

}