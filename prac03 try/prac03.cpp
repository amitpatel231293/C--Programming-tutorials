
/* Amit Patel */
/* // Id:1697700 */
/* // Practical03 */
/* //  28th august 2016 */
/* //  Prac03.cp */

#include<iostream>
#include <string>
#include<fstream>

#include <iomanip>


using namespace std;

#define exm 3
#define MAX_STUDENTS 10


class Student/*structure student for saving student names and exam data*/
{
    
private:/*creating the states*/
    string name['n'];
    double exams[exm];
    
public:
    
    int cal();
    void getdetail();
    Student(){}
    ~Student(){}
    double total['n'];
    int avgmx;
    string fname,lname;
    int avgmin;
    int data[3];
    int n; /* variable for total number of students*/
    
    void getdetails()
    {   
    ifstream mn("students.txt");/* reading the data from the file*/
    
     for (int i = 0; i < n; i++)
      {
        mn >> name[i] >> exams[0] >> exams[1] >> exams[2];
     	total[i] = exams[0] + exams[1] + exams[2];
      }   
     mn.close();
    }

};


/*function for finding maximum and minimum*/
int Student::cal()
{
    int mx,mmm;/* variable for maximum and minimum */
    mx = total[0];
    mmm = total[0];
    
    for(int i=0;i<n;i++)
    {
        if(mmm>total[i])
        {
            mmm=total[i];
            lname=name[i];
        }
        if(mx<total[i])
        {
            mx=total[i];
	    fname=name[i];
        }
        
    }
    avgmx=mx/2; /* average of maximumv*/
    avgmin=mmm/2; /* average of minimum*/
    return 0;
}


int main(void)
{

    ofstream myfile; /*ofstream for inputing data in text file*/
    myfile.open ("results.txt"); /* opening the file*/
    Student l;/* student class object*/
    string name; 
    
    /* calling student and cal sunctions and printing */
    cout << "Welcome to student into system!Please input the number of students: " ;
    cin >> l.n;
    l.getdetails();/* calling the object of class*/
    l.cal();/* calling the object of class


    /* writing the data in the file outputing*/
    myfile << "The highest score is " << l.avgmx << " and the lowest score is " << l.avgmin << endl;
   
    myfile << "highest score is of " << l.fname << endl;
    myfile.close();
}
