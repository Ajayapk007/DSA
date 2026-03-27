#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums){
        int candidate, count =0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if( count ==0){
                 candidate =nums[i];
            }
            if( candidate == nums[i]){
                count++;
            }
            else 
            count--;
        }
        count =0;
        for (size_t i = 0; i < nums.size(); i++)
        {
         if( candidate == nums[i])
         count++;   
        }
        if( count > nums.size()/2)
            return candidate;

        return -1;
        
}



int main()
{
    vector<int> nums = {1, 1, 3, 1, 2, 4, 2,1,1};
    cout << "The majority element is: " << majorityElement(nums) << endl;

    return 0;
}