class Solution
{
public:
    int ans;
    int reversePairs(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size());
        return ans;
    }

    void mergeSort(vector<int> &nums, int low, int high)
    {
        if (high - low <= 1)
            return;
        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid, high);
        merge(nums, low, high, mid);
    }

    void merge(vector<int> &nums, int low, int high, int mid)
    {
        int j = mid, i;
        for (i = low; i < mid; i++)
        {
            while (j < high && nums[i] > (long long)2 * nums[j])
            {
                j++;
            }
            ans += (j - mid);
        }

        vector<int> temp;
        i = low;
        j = mid;
        while (i < mid && j < high)
        {
            if (nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }

        while (i < mid)
            temp.push_back(nums[i++]);
        while (j < high)
            temp.push_back(nums[j++]);

        move(temp.begin(), temp.end(), nums.begin() + low);
    }
};
