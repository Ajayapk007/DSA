#include <iostream>
using namespace std;

float squareRoot(int n)
{
    if (n <= 0)
    {
        cout << " Error Enter Correct Input " << endl;
        exit(0);
    }
    int start = 0;
    int mid;
    int end = n;
    float ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == n)
            return mid;
        // cout << "a" << endl;
        if (mid * mid > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
// for O(logn )

/*
double more(int num, double ans, int x)
{
    int s = 0;
    int e = 10;
    int mid;
    int i = 0;
    double step = 0.1;
    double answer;
    while (i < x)
    {
        mid = s + (e - s) / 2;
        double com = (ans + step*mid);
        if (com * com <= num)
        {
            answer = com ;
            // cout << " here " << answer << endl;
            s = mid + 1;
        }
        else
            e = mid ;

        if (s >= e)
        {
            s = 0;
            e = 10;
            i++;
            step = step / 10;
            ans = answer;
        }
    }
    return answer;
}
*/

// For O(n^2)
double more(int n, double ans, int precision)
{
    double factor = 1;
    double answer = ans;
    for (size_t i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j = j + factor)
        {
            answer = j;
        }
    }
    return answer;
}

int main()
{
    int n = 23;
    float ans = squareRoot(n);

    cout << "Square root of " << n << " is: " << ans << endl;

    int x = 4;
    cout << " more accurate " << more(n, ans, x);

    return 0;
}