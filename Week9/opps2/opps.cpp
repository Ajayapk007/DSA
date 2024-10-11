#include <iostream>
using namespace std;

class Student{
    public:
    int id,age;
    string name, friends;
    Student(){
        cout << "Default Ctor" << endl;
    }
    Student(string s, int _age, string gfname, int _id){
        id = _id;
        name =s;
        friends = gfname;
        age = _age;
    }
    Student(const Student &srcobj) {
        this->age = srcobj.age;
        this->name = srcobj.friends;
        this->friends = srcobj.friends;
        this->id = srcobj.id;
        cout << "Copy Ctor is called " << endl;
    }
    void printInfo(){
        cout << "Name is " << name << endl;
        cout << "Age is " << age << endl;
        cout << "Friend name  is " << friends << endl;
        cout << "Id is " << id << endl;
    }

};
 
int main (){

    Student s1("Ajay", 12, "Bantu   ", 34 );
    // s1.printInfo();
    Student s2 ;
    s2 = s1;
    cout << s1.name << endl;
    cout << s2.name << endl;

return 0;
}