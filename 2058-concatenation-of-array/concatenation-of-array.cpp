class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
   vector<int> num1(nums.size()*2);
   for(int i=0;i<nums.size();i++){
    num1[i]=nums[i];
    num1[i+nums.size()]=nums[i];
   }
   return num1;
    }
};