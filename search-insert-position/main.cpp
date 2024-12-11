#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public: 
        int searchInsert(vector<int>& nums, int target) {
            int i = 0;
            while (i < nums.size() && target > nums[i]){
                i++;
            }
            return i;
        }
};
int main(){
    Solution sol;
    vector<int> nums = {1,3,5,6};
    int target = 5;

    int number = sol.searchInsert(nums, target);

    cout << number << endl;
    

}