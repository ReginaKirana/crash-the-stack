class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) return 0;

        int min_num = *min_element(nums.begin(), nums.end());
        int max_num = *max_element(nums.begin(), nums.end());
        if (min_num == max_num) return 0;

        int n = nums.size();
        int bucket_size = max(1, (max_num - min_num) / (n - 1));
        int bucket_count = ((max_num - min_num) / bucket_size) + 1;

        vector<int> buckets_min(bucket_count, INT_MAX);
        vector<int> buckets_max(bucket_count, INT_MIN);

        for (int num : nums) {
            int idx = (num - min_num) / bucket_size;
            buckets_min[idx] = min(buckets_min[idx], num);
            buckets_max[idx] = max(buckets_max[idx], num);
        }

        int max_gap = 0, prev_max = min_num;
        for (int i = 0; i < bucket_count; ++i) {
            if (buckets_min[i] == INT_MAX) continue;
            max_gap = max(max_gap, buckets_min[i] - prev_max);
            prev_max = buckets_max[i];
        }

        return max_gap;
    }
};
