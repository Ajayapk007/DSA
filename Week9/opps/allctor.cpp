#include <iostream>
using namespace std;

class Student
{
private:
    int age;
    string stream;
    int studId;

public:
    string name;
    //default ctor
    Student(){ cout << "default ctor" << endl;}
   // parameteried ctor

    Student(string name, int age, string stream, int sdtudId);
    // copy ctor

    Student(const Student &srcobj);// const use for security no change in src object
};

 Student:: Student( string name, int age, string stream, int sdtudId)
{
    cout << "Called parameterized Ctor " << endl;
    this->name = name;
    this->age = age;
    this->studId = studId;
    this->stream = stream;
}
 Student:: Student(const Student &srcobj){
    cout << "Copy Ctor " << endl;
    this->name = srcobj.name;
    this->age = srcobj.age;
    this->studId = srcobj.studId;
    this->stream = srcobj.stream;
 }

 
int main (){

 Student s1;
 Student s2("Nandu",21,"PCB", 201600);
 Student s3 = s1;
 Student *s4 = new Student("Shivam", 23,"Commerce", 201400);
 cout << s4->name << endl;
 Student s5(*s4);
return 0;
}
