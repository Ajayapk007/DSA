#include <iostream>
using namespace std;
 
class Animal{
    public:
    void sound(){
        cout << "Animal making sound" << endl;
    }
};

class Dog: public Animal{
    public:
    void a(){
        cout << " aaj" << endl;
    }
    void sound(){
        cout << "Dog bho bho" << endl;
    }
};

class Cat: public Animal{
    public:
    void sound(){
        cout << "Cat meow" << endl;
    }
};
void sound(){

}

int main (){
// Dog * dog = new Dog();
// dog->sound();
Animal * animal = new Dog();
animal->sound();
Animal * animal2 = new car();
animal2->sound();
 
return 0;
}