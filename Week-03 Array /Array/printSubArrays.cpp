// kadane's 

#include <iostream>
using namespace std;
 
int main (){

int arr[]{-2,-3,4,-1,-2,1,5,-3};

int cs = 0;
int ms = 0;

for (int i = 0; i < sizeof(arr)/ 4; i++)
{
    if((cs + arr[i]) > 0) {
        cs += arr[i];
    }
    else cs =  0;
    if(cs > ms) ms = cs;
}

cout  << "max sum of subarray is: " << ms << endl;

 
return 0;
}


// #include <iostream>
// using namespace std;
 
// int main (){
// int arr[]{1,2,3,4};
// int prefix[4];
// int max = INT16_MIN;

// prefix[0] = arr[0];
// for (size_t i = 1; i < 4; i++)
// {
//     prefix[i] = prefix[i-1] + arr[i];
// }

// for (int start = 0; start < 4; start++)
//     for (int end = start; end < 4; end++)
// {       
//     {
//         int sum =  start == 0? prefix[end] : prefix[end] - prefix[start -1]; 
//         if(sum >= max){
//             max = sum;
//         }
//     }
    
// }
// cout << "sum is : "<< max;

// return 0;
// }