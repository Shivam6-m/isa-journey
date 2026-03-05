#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to find majority element
int majorityElement(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n/2];
}
// Driver Code
int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    int result = majorityElement(nums);
    cout << "Majority Element is: " << result;
    return 0;
}