class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        if not intervals:
            return []

        # Urutkan berdasarkan awal interval
        intervals.sort(key=lambda x: x[0])
        merged = [intervals[0]]

        for i in range(1, len(intervals)):
            last = merged[-1]

            # Jika overlap
            if intervals[i][0] <= last[1]:
                # Gabungkan
                last[1] = max(last[1], intervals[i][1])
            else:
                merged.append(intervals[i])

        return merged
