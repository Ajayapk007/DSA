#include <iostream>
using namespace std;

class Deque
{
private:
   int *arr;
   int front;
   int rear;
   int maxSize;

public:
   Deque(int size)
   {
      maxSize = size;
      arr = new int[size] {0};
      front = -1;
      rear = -1;
   }
   void front_push(int data);
   void back_push(int data);
   void front_pop();
   void back_pop();

   ~Deque(){
      delete[] arr;
   }

   void print(){
        cout << "Queue elements: " ;
        for(int i = 0; i < maxSize; i++)
        cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{  
   Deque dp(5);
   dp.print();

   dp.back_push(5);
   dp.print();

   dp.front_push(1);
   dp.print();

   dp.back_push(3);
   dp.print();

   dp.back_push(2);
   dp.print();

   dp.front_push(4);
   dp.print();

   dp.back_push(22);
   dp.print();

   // cout << endl << "Deleting elements From Queue" << endl << endl;

   // dp.back_pop();
   // dp.print();

   // dp.front_pop();
   // dp.print();

   return 0;
}

void Deque::front_push(int data)
{
   if(front == -1 && rear == -1)
   {
      front++; rear++;
      arr[front] = data;
   }
   else if((front == 0 && rear == maxSize -1) || (rear == front - 1 )){
      cout <<"Overlfow" << endl;
   }
   else if( front == 0 && rear != maxSize -1)
   {
      front = maxSize -1;
      arr[front] = data;
   }
   else
   {
      front--;
      arr[front] = data;
   }
}

void Deque::back_push(int data)
{
   if(front == -1 && rear == -1)
   {
      front++; rear++;
      arr[rear] = data;
   }
   else if((front == 0 && rear == maxSize -1) || (rear == front - 1 ))
   {
      cout <<"Overflow" << endl;
   }
   else if(rear == maxSize -1 && front != 0)
   {
      rear++;
      arr[rear] = data;
   }
   else
   {
      rear++; 
      arr[rear] = data;
   }
}

void Deque::back_pop(){
   if (front == -1 && rear == -1)
   {
      cout << "Underflow" << endl;
   }
    else if (front == rear)
   {
      arr[front] = -1;
      rear = -1;
      front = -1;
   }
   else if(rear == 0)
   {
      arr[rear] = -1;
      rear = maxSize -1;
   }
   else
   {
      arr[rear] = -1;
      rear--;
   }
}

void Deque::front_pop()
{
   if (front == -1 && rear == -1)
   {
      cout << "Underflow" << endl;
   }
   else if (front == rear)
   {
      arr[front] = -1;
      rear = -1;
      front = -1;
   }
   else if (front == maxSize - 1)
   {
      arr[front] = -1;
      front = 0;
   }
   else
   {
      arr[front] = -1;
      front++;
   }
}

