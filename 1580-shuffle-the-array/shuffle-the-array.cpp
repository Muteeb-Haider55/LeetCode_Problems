class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> result(nums.size());
        int x=0;
        int y=n;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                result[i]=nums[x++];
            }
            else{
                result[i]=nums[y++];
            }
        }
        return result;
    }
};