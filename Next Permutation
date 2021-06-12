void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return;
        }
        int i = n-2;
        while (i >= 0) {
            if (nums[i] < nums[i+1]) {
                int loc = i+1;
                int val = nums[loc];
                int j = i+1;
                while (j < n) {
                    if (nums[i] < nums[j] && nums[j] < val) {
                        val = nums[j];
                        loc = j;
                    }
                    j++;
                }
                swap(nums[i], nums[loc]);
                sort(nums.begin()+i+1, nums.end());
                return;
            }
            i--;
        }
        sort(nums.begin(), nums.end());
        return;
    }
