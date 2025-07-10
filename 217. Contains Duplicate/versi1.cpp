class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen; //set kosong

        for (int i: nums){
            if(seen.count(i)){
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};