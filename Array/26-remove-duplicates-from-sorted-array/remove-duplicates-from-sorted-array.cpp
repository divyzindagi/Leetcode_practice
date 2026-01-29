class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        vector<int> unique;
        unique.push_back(nums[0]);
        
            for(int i=1; i<nums.size(); i++){
                if(nums[i]!=nums[i-1]){
                    unique.push_back(nums[i]);
                }
            }
            for(int i=0; i<unique.size(); i++){
                nums[i]= unique[i];
            }
            return unique.size();
        }
        
    };