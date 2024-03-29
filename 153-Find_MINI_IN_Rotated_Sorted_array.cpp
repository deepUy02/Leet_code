int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        
        while(low<high){
            if(nums[low]<=nums[high])
                {
                    return nums[low]; 
                }  
                    
            int mid=low + (high-low)/2;
            if(nums[low] > nums[mid]){
                high=mid;
            }
            else if(nums[mid] > nums[high]){ //low will move to the mid+1 posoition 
                low=mid+1;
            }
        }
        if(nums[low]<=nums[high])
            return nums[low];
        return -1;
    }
