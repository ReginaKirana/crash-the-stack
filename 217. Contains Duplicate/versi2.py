class Solution(object):
    def containsDuplicate(self, nums):
        seen = set() # buat set kosong

        for i in nums:
            if i in seen:
                return True
            seen.add(i)

        return False # selesai loop tidak ada duplikat 