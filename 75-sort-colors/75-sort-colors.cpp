class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        
        int x=0,mid=0,z=n-1;
        
        
        while(mid<=z){
            if(nums[mid]==0){
                swap(nums[x++],nums[mid++]);
            }
            else if(nums[mid]==1)
                mid++;
            else
                swap(nums[mid], nums[z--]);
        }
        
    }
};

/*
2 0 2 1 1 0 mid = 0, z=5 x =0
0 0 2 1 1 2 mid=0 z=4 x=0
0 0 2 1 1 2 mid=1 z=4 x=1
0 0 2 1 1 2 mid=2 z=4 x=2
0 0 1 1 2 2 mid=2 z=3 x=2
*/


