#include <iostream>
using namespace std;

void fibo(int nth, int current = 0, int next = 1, int count = 0) {
    if (count <= nth) {
        
        cout << current << " " << next << endl;
        fibo(nth, next, current + next, count + 1);
    }
}

int main (){

int nth = 6;
fibo(nth);

return 0;
}

