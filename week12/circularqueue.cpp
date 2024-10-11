#include <iostream>
using namespace std;
 
 class Queue
 {
 private:
    int *arr;
    int Front;
    int rear;
    int maxSize;
 public:
    Queue(int size);

    // insert element in queue
    void push(int data);
    // Delete Element form Queue 
    void pop();
    // check size of queue 
    int size();

    //Check Queue is empty or not 
    bool empty();
    ~Queue();

      void print(){
        cout << "Queue all elements: " ;
        for(int i = 0; i < maxSize; i++)
        cout << arr[i] << " ";
        cout << endl;
    }
 };

 void Queue:: push(int data){
    if(Front == 0 && rear == maxSize -1 || Front - 1 == rear ){
        cout <<"Queue is full " << endl; 
        return;
    }
    if( rear == maxSize -1 && Front != 0)
    {
        rear = 0;
        arr[rear] = data;
    }
     else if(rear == -1 && Front == -1)
    {
        Front++; rear++;
        arr[rear] = data;
    }
    else{
        rear++;
        arr[rear] = data;
    }
 }

 bool Queue::empty(){
    if(Front == -1 && rear == -1){
        return 0;
    }
    else 
    return 1;
 }

  void Queue:: pop(){
    if(Front == -1 && rear ==  -1){
        cout <<"Queue is empty " << endl; 
        return;
    }
    else if( rear ==  Front)
    {
        arr[Front] = -1;
        rear = -1;
        Front = -1;
    }
    else if (Front == maxSize -1){
        arr[Front] == -1;
        Front = 0;
    }
    else
    {
    arr[Front] = -1; Front ++;
    }
    
 }
 
 Queue::Queue(int size)
 {
    maxSize  = size;
    Front = -1;
    rear = -1;
    arr = new int[maxSize] {0};

 }
 
 Queue::~Queue()
 {
    delete[] arr;
 }

 int Queue::size(){
    if(this->empty()){
        if(Front > rear){
            return maxSize - Front +rear +1;
        }
        else if( Front == rear){
            return 1;
        }
        else
        return rear - Front   +1;

    }
    else return 0;
 }
 
int main (){

    Queue b(5);
    b.push(10);
    b.push(10);
    b.push(10);
    b.push(10);
    // b.push(10);
    b.push(10);
    b.print();

    b.pop();
    b.pop();
    b.pop();
    b.print();

        b.push(10);
    b.push(30);
    b.push(40);
    b.print();
    b.push(40);
    b.print();

    // Queue a(5);
    // a.push(5);    
    // a.print();
    // cout << "size of Queue is: " << a.size() << endl;

    // a.push(5);    
    // a.print();
    // cout << "size of Queue is: " << a.size() << endl;

    // a.push(5);    
    // a.print();
    // cout << "size of Queue is: " << a.size() << endl;

    // a.push(5);    
    // a.print();
    // cout << "size of Queue is: " << a.size() << endl;

    // a.push(5);    
    // a.print();
    // cout << "size of Queue is: " << a.size() << endl;

    // cout << endl << "Removing elements from queue" << endl  << endl;

    // a.pop(); 
    // a.print();  
    // cout << "size of Queue is: " << a.size() << endl;
   
    // a.pop(); 
    // a.print();  
    // cout << "size of Queue is: " << a.size() << endl;

    // a.push(5);    
    // a.print();
    // cout << "size of Queue is: " << a.size() << endl;

    // a.pop(); 
    // a.print(); 

    // a.pop(); 
    // a.print(); 

    // a.pop(); 
    // a.print(); 

    // a.pop(); 
    // a.print(); 
    // a.push(3);
    // a.print();
    // a.push(1);
    // a.print();
    


return 0;
}