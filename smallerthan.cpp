class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n= nums.size();
         vector<int> final(n);
        int count=0;
        for(int i=0; i<n ; i++){
          
            for(int j=0; j<n; j++){
                if(nums[j]<nums[i] && j!=i){
                    count++;
                }
            }
            final[i]=count;
            count=0;
        }
       return final;  
    }
   
};