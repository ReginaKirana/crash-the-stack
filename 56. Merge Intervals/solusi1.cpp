class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Urutkan berdasarkan awal interval
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); ++i) {
            // Ambil referensi ke interval terakhir dalam hasil
            vector<int>& last = merged.back();

            // Jika ada overlap
            if (intervals[i][0] <= last[1]) {
                // Gabungkan
                last[1] = max(last[1], intervals[i][1]);
            } else {
                // Tidak overlap, tambahkan ke hasil
                merged.push_back(intervals[i]);
            }
        }

        return merged;
    }
};
