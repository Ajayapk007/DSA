#include <iostream>
#include <vector>
using namespace std;
int solve(int dividend, int divisor)
{
    int start = 0;
    int end = dividend;
    int ans =0;
    int mid = start + ( end -start ) / 2;
    while (start <= end)
    {
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor <= dividend)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + ( end- start) / 2;
    }
    return ans;
}

int main()
{
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout << " Your ans is " << ans << endl;
    return 0;
}