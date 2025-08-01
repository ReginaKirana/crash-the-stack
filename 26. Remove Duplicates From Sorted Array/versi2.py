class Solution(object):
    def removeDuplicates(self, nums):
        if not nums: # array kosong
            return 0
        
        i = 0 # pointer untuk akses elemen
        
        for j in range(1, len(nums)):
            if nums[j] != nums[i]:
                i += 1
                nums[i] = nums[j]
        
        return i + 1