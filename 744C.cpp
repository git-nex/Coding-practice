#include<bits/stdc++.h>
using namespace std;

class Student
{
  
  public:

  Student() // constructor 1
  {
    cout<<"No marks entered"<<endl;
  }
  Student(int marks1 , int marks2 ) // constructor 2
  {
    cout<<"Your marks are "<<marks1<<" "<<marks2<<endl;
  }
  Student(int marks1 , int marks2 , int marks3) // constructor 3
  {
    cout<<"Your marks are "<<marks1<<" "<<marks2<<" "<<marks3<<endl;
  }
  

};



// driver code

int main()
{

  Student s1; // creating a Student object without passing any parameter 
  
  Student s2(75,85);

  Student s3(12,88,65);

  return 0;
}

