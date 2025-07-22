class Solution(object):
    def maximumGap(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) < 2:
            return 0

        min_num, max_num = min(nums), max(nums)
        if min_num == max_num:
            return 0

        n = len(nums)
        bucket_size = max(1, (max_num - min_num) // (n - 1))
        bucket_count = ((max_num - min_num) // bucket_size) + 1

        buckets_min = [float('inf')] * bucket_count
        buckets_max = [float('-inf')] * bucket_count

        for num in nums:
            idx = (num - min_num) // bucket_size
            buckets_min[idx] = min(buckets_min[idx], num)
            buckets_max[idx] = max(buckets_max[idx], num)

        max_gap = 0
        prev_max = min_num

        for i in range(bucket_count):
            if buckets_min[i] == float('inf'):
                continue
            max_gap = max(max_gap, buckets_min[i] - prev_max)
            prev_max = buckets_max[i]

        return max_gap
