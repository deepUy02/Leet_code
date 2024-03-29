int lowBound(vector<int>&nums,int target){
        int left=0;
        int right=nums.size()-1;

        int ans=-1;

        int mid=left+(right-left)/2;
        while(left<=right){
            if(target==nums[mid]){
                ans=mid;
                right=mid-1;
            }
            else if(target<nums[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            mid=left+(right-left)/2;
        }
        return ans;
    }
    int uprBound(vector<int>&nums,int target){
        int left=0;
        int right=nums.size()-1;

        int ans=-1;

        int mid=left+(right-left)/2;
        while(left<=right){
            if(target==nums[mid]){
                ans=mid;
                left=mid+1;
            }
            else if(target<nums[mid]){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            mid=left+(right-left)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lowBound(nums,target),uprBound(nums,target)};
    }
