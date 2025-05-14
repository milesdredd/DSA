#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int Count=0;
        int major= nums[0];
        for ( int i = 0;i < nums.size(); i++){
            if (major == nums[i]){
                Count++;

            }else{
                Count--;
            }
            if (Count ==0){
                major= nums[i+1];


            }
        }
        return major;

    }
};
int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution sol;
    cout << "major is : " << sol.majorityElement(nums) << endl;











return 0;
}
