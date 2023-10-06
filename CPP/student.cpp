#include <iostream>
#include <math.h>
#include <string.h>

#define num_Student 10
using namespace std;

typedef struct
{
    string regno;
    string courseid;
    int units;
    float indMean;
    string unitsRegistered[7]; 
    int unitsmarks[7];
    string surname;
    string firstname;
    string address;
    char grade;
}student;

void getData(student s[]);
int computeMean(student std[]);
void computeGrade(student std[]);
void printStudent(student s[]);
float classMean(student s[]);
float stddeviation(student s[]);
float highestClsMk(student s[]);
float lowestClsMk(student s[]);


student s[10];
int main(void)
{
    getData(s);
    computeMean(s);
    computeGrade(s);
    classMean(s);
    stddeviation(s);
    highestClsMk(s);
    lowestClsMk(s);
    printStudent(s);

    return (0);
} 

void getData(student s[])
{
    int m;
    int units;
    int i;
    for(i=0; i < num_Student; i++)
    {

    cout<<"Enter your Regno :";
    cin>> s[i].regno;
    cout<<"Enter your courseid :";
    cin>> s[i].courseid;
    cout<<"Enter your surname :";
    cin>> s[i].surname;
    cout<<"Enter your firstname:";
    cin>> s[i].firstname;
    cout<<"Enter your address :";
    cin>> s[i].address;
    cout<<"Enter the number of units to register: ";
    cin>> s[i].units;
         for(m=0; m <s[i].units; m++)
        {
        
            cout<<"Enter the course unit:";
            cin>> s[i].unitsRegistered[m];
            cout<<"Enter the marks:";
            cin>> s[i].unitsmarks[m];

        
        }

    }

}
void printStudent(student s[])
{
    int i;
    int m;
    for (i = 0; i < num_Student; i++)
    {
         cout<<"STUDENT:"<<i+1<<endl;
        cout<<"YOUR REGNO: "<<s[i].regno<<endl;
        cout<<"YOUR COURSEID: "<<s[i].courseid<<endl;
        cout<<"YOUR SURNAME: "<<s[i].surname<<endl;
        cout<<"YOUR FIRSTNAME: "<<s[i].firstname<<endl;
            for(m = 0; m < s[i].units; m++)
            {
                cout<<"YOUR UNITS REGISTERED: "<<s[i].unitsRegistered[m]<<endl;
                cout<<"YOUR UNIT MARKS: "<<s[i].unitsmarks[m]<<endl;
            }
        cout<<"YOUR ADDRESS: "<<s[i].address<<endl;
        cout<<"YOUR MEAN IS:"<<s[i].indMean<<endl;
        cout<<"YOUR GRADE IS:"<<s[i].grade<<endl;
        cout<<endl;
    }
    cout<<"THE CLASS MEAN IS:"<<classMean(s)<<endl;
    cout<<"THE STANDARD DEVIATION IS:"<<stddeviation(s)<<endl;
    cout<<"THE HIGHEST MARK IN THE CLASS IS:"<<highestClsMk(s)<<endl;
    cout<<"THE LOWEST MARK IN THE CLASS IS:"<<lowestClsMk(s)<<endl;
}

int computeMean(student std[])
{
    float mean;
    int i;
    int j;

    for(i = 0; i < num_Student; i++)
    {
        float sum = 0;
        for (j = 0; j < std[i].units; j++)
        {
            sum += std[i].unitsmarks[j];
        }
        mean = sum/std[i].units;
        std[i].indMean = mean;  
    }
    return(0);
}

void computeGrade(student std[])
{
    int i;
    for(i = 0; i < num_Student; i++)
    {
        if (std[i].indMean > 80)
        {
            std[i].grade = 'A';
        }
        else if (std[i].indMean > 70)
        {
            std[i].grade = 'B';
            
        }
         else if (std[i].indMean > 50)
        {
            std[i].grade = 'C';
        }
         else if (std[i].indMean > 35)
        {
            std[i].grade = 'D';
        }
         else if (std[i].indMean > 20)
        {
            std[i].grade = 'E';
        }
         else
        {
           std[i].grade = 'F';
        }
    }
}
float classMean(student s[])
{
    int i;
    float sum = 0;
    float clsMean;
    for (i = 0; i < num_Student; i++)
    {
        sum = sum +s[i].indMean;
    }
    clsMean = sum/num_Student;

    return(clsMean);
}
float stddeviation(student s[])
{
    int i;
    int sum = 0;
    int p;
    float stdDev;
    for(i = 0; i < num_Student; i++)
    {
        sum = sum + pow((s[i].indMean - classMean(s)),2);
    }
    p = sum/num_Student;
    stdDev = sqrt(p);
    //cout<<"THE STANDARD DEVIATION IS:"<<stdDev<<endl;
    return(stdDev);
}
float highestClsMk(student s[])
{
    int i;
    float max = s[0].indMean;
    for (i = 1; i < num_Student; i++)
    {
        if (max < s[i].indMean)
        {
            max = s[i].indMean;
        }
        
    }
    return(max);
    
}
float lowestClsMk(student s[])
{
    int i;
    float min = s[0].indMean;
    for (i = 1; i < num_Student; i++)
    {
        if (min > s[i].indMean)
        {
            min = s[i].indMean;
        }
        
    }
    return(min);
}