#include <iostream>
using namespace std;

class Student
{
private:
    string gf;

public:
    int id;
    int age;
    string name;
    int nos;
    bool present;

    void study()
    {
        cout << "Studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void dream()
    {
        cout << "Dreaming" << endl;
    }

private:
 void chat(){
    cout << "Chatting" << endl;
 }

};

int main()
{
    Student s1;
    cout << s1.age;
    // s1.name = "Ajay";
    // s1.age = 23;
    // s1.id = 201861;
    // s1.nos = 5; 
    // s1.present = true;
    // // cout << sizeof(Student) << endl;

    // Student s2;
    // s1.name = "Ajay Pal";
    // s1.age = 19;
    // s1.id = 201821;
    // s1.nos = 6; 
    // s1.present = true;
    return 0;
}