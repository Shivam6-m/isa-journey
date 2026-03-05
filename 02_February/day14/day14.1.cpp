#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
int maximumCount(vector<int>& nums) {
 int positive = 0;
 int negative = 0;
 for(int i = 0; i < nums.size(); i++) {
    if(nums[i] > 0) positive++;
     else if(nums[i] < 0) negative++;
    }
        return max(positive, negative);
    }
};
int main() {
Solution obj;
vector<int> nums = {-2,-1,-1,1,2,3};
 cout << obj.maximumCount(nums);
}