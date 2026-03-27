#include <iostream>
using namespace std;

class Queue{
    int front ;
    int rear;
    int maxSize;
    int *arr;
    public:
    Queue( int size){
        front = -1;
        rear = -1;
        maxSize = size;
        arr = new int[maxSize] {0};
    }
    // Insertin funtion element
   void push(int data);

   //Delete element from list
   void pop();

   // size of queue
   int size();

  // get last element of queue
  int back();
 
 // get front element of queue
    int Front();
  //for checking queue is empty or not
  bool isEmpty() {
        return front == -1 && rear == -1;
    }

    void print(){
        cout << "Queue all elements: " ;
        for(int i = 0; i < maxSize; i++)
        cout << arr[i] << " ";
        cout << endl;
    }
    ~Queue() {
        delete[] arr;  
    }
};

 
int main (){

    Queue c(5);
    c.push(10);
    cout << "size of Queue is " << c.size() << endl;;
    c.print();

    c.push(20);
    cout << "size of Queue is " << c.size() << endl;;
    c.print();

    c.push(30);
    cout << "size of Queue is " << c.size() << endl;;
    c.print();

    c.push(40);
    cout << "size of Queue is " << c.size() << endl;;
    c.print();

    c.push(50);
    cout << "size of Queue is " << c.size() << endl;;
    c.print();
    
    c.pop();
    c.print();

    c.pop();
    c.print();
    c.pop();
    c.print();
    c.pop();
    c.print();
    c.pop();
    c.print();

    c.push(50);
    cout << "size of Queue is " << c.size() << endl;;
    c.print();




    // cout << sizeof(Queue);

    // Queue b(5);
    // b.push(3);
    // b.push(2);
    // b.push(1);
    // cout << "size of queue is: " << b.size() << endl;
    // cout << "Front element is: " << b.Front() << endl;
    // cout << "Last element is: " << b.back() << endl; 


    // Queue a(5);
    // a.push(5);
    // // a.push(5);
    // a.push(5);
    // a.push(5);
    // a.push(9);
    // a.push(5);
    // // a.pop();
    // cout <<"Size of quere is " <<  a.size() << endl;

    // cout << "Last element of Queue is " << a.back() << endl;
    
    // cout <<"EveryThing is fine" << endl;
 
return 0;
}


// Declear function for size
 int Queue::size(){
    if(this->isEmpty()){
        return 0;
    }
    else
     return (rear - front +1); 
 }

 // Declear function for pop element from front of array
 void Queue::pop(){
    if(rear ==  -1 && front == -1) {
        cout << "Queue is underflow" << endl;
      return;
    }
    arr[front] = -1;
    if(front ==  rear){
        rear = -1; front = -1;
    }
    else
    front++;  
   }

    //declear insertion function 
     void Queue:: push(int data){
    if(rear == maxSize -1) {
        cout << "Queue is Overflow" << endl;
      return;
    }
    if(front == -1 && rear == -1){
        front++; rear++;
        arr[front] = data;
    }
    else
    rear++;
    arr[rear] = data;
   }
   // back funtion => this function is use for getting last element of Queue

   int Queue::back(){
        if(this->isEmpty()){
            return -1;
        }
        else
       return arr[rear];
   }

   int Queue::Front(){
    if(this->isEmpty()){
        return -1;
    }
    else
    return arr[front];
   }
