#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student{
    private:
    string gfName;
    void gfChating(){
        cout << "Chatting " << endl;
    }
    
    public:
    string name;
    int age ;
    int id;
    bool present;
    int nos;

    Student(){} //degault constructor
    //constructor
    Student(string name, int age, int id, bool present, string gfName){
        this->name = name;
        this->age = age;
        this->id = id;
        this->present = present;
        this->gfName = gfName;
    }
    
    void study(){
        cout << "sleeping" << endl;
    }
    void sleeping(){
        cout << "He is eating" << endl;
    }
};
int main(){
    cout << "Hello, World" << endl;

    Student s1("Chota Bheem",3,32,1,"neha");
    Student s2;
    s2 = s1;

    cout << s1.name << endl;
    cout << "k" << endl;

    // // cout << sizeof(Student) << endl;
    
    // Student s1;
    // s1.name = "Naina";
    // s1.age = 19;
    // s1.id = 23;
    // s1.nos = 5;
    // s1.present = 0;

    // Student s2;
    // s2.name = "Bheem";
    // s2.age = 18;
    // s2.id = 22;
    // s2.nos = 5;
    // s2.present = 1;

//     Student s4;
//     Student *s5 = new Student("bhawna",22, 34,1,"****");

//     Student s3("Chhota Bheem", 12, 32,1,"Chutki");
//     cout << s2.name << endl;
//     cout << s1.name << endl;
//     cout << s3.name << endl;
//     cout << s4.name << endl << endl;
//     cout << (*s5).name << endl;
//     cout << s5->age << endl << endl;
//     // cout << s3.gfName;

//     cout << s2.age << endl;
//     cout << s1.age << endl;
//     cout << s3.age << endl;
//     cout << s4.age << endl;
    
//     delete s5;// no leak\\

}