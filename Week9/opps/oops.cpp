// overloading class constructors
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    Rectangle (int,int,int);
    int area (void) {return (width*height);}
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}
Rectangle::Rectangle (int a, int b, int c){
    width = a;
    height = b + c;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rectb;
  Rectangle rectc(3,2,4);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}