class Solution {
    public int missingNumber(int[] nums) {
        Arrays.sort(nums);
        
        if (nums[0] > 0)
            return 0;
        
        int i = 0;
        while (i < nums.length - 1 && nums[i] == nums[i+1] - 1)
            i++;
        
        return nums[i] + 1;     
    }
}