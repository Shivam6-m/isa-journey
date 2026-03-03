#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to rotate array
void rotate(vector<int>& nums, int k) {
 int n = nums.size();
 k = k % n;
// Step 1: Reverse full array
    reverse(nums.begin(), nums.end());
 // Step 2: Reverse first k elements
      reverse(nums.begin(), nums.begin() + k);
 // Step 3: Reverse remaining elements
      reverse(nums.begin() + k, nums.end());
}
int main() {
vector<int> nums = {1,2,3,4,5,6,7};
 int k = 3;
rotate(nums, k);
cout << "Rotated Array: ";
 for(int i = 0; i < nums.size(); i++) {
     cout << nums[i] << " ";
    }
    return 0;
}