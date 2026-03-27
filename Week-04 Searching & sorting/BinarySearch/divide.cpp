#include <iostream>
#include <vector>
using namespace std;

int divideBS(int dividend, int divisor){
    int start = 0; int end = dividend;
    int mid; int ans = -1;
    while (start <= end)
    {
        mid = start + (end - start)/2;
        if(mid * divisor == dividend){
             return mid;
        }
        if(mid * divisor <= dividend ){
            ans = mid;
            start = mid+1;
        }
        else 
            end = mid - 1;
    }
    return ans;
}
int main()
{
    int dividend = -7;
    int divisor = -7;

    int ans2 = divideBS(dividend, divisor);

    if((dividend > 0 && divisor < 0 )|| (dividend < 0 && divisor > 0) )
    {
        ans2 =  0 - ans2;   
    }

    cout << "Answer of dividedBS function " << ans2 << " " <<endl;
    return 0;
}