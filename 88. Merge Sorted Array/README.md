# 88. Merge Sorted Array

**Difficulty:** Easy  
**Link:** [LeetCode Problem](https://leetcode.com/problems/merge-sorted-array/)

---

## 📝 Problem Statement

You are given two integer arrays `nums1` and `nums2`, sorted in non-decreasing order, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

Merge `nums1` and `nums2` into a single array sorted in non-decreasing order.

The final sorted array should **not be returned** by the function, but instead be **stored inside the array `nums1`**. To accommodate this, `nums1` has a length of `m + n`, where the first `m` elements denote the elements that should be merged, and the last `n` elements are set to 0 and should be ignored. `nums2` has a length of `n`.

---

## 💡 Examples

### Example 1
**Input:**  
`nums1 = [1,2,3,0,0,0]`, `m = 3`  

`nums2 = [2,5,6]`, `n = 3`

**Output:**  
`[1,2,2,3,5,6]`

**Explanation:**  
We merge [1,2,3] and [2,5,6], resulting in [1,2,2,3,5,6].

---

### Example 2
**Input:**  
`nums1 = [1]`, `m = 1`  

`nums2 = []`, `n = 0`

**Output:**  
`[1]`

**Explanation:**  
`nums2` is empty, so no changes are needed.

---

### Example 3
**Input:**  
`nums1 = [0]`, `m = 0`  

`nums2 = [1]`, `n = 1`

**Output:**  
`[1]`

**Explanation:**  
`nums1` has no valid elements; we copy all of `nums2`.

---

## ✅ Constraints

* `nums1.length == m + n`
* `nums2.length == n`
* `0 <= m, n <= 200`
* `1 <= m + n <= 200`
* `-10⁹ <= nums1[i], nums2[j] <= 10⁹`

---

## 🔑 Key Ideas

* Start filling from the back of `nums1` (index `m + n - 1`) to avoid overwriting values.
* Use three pointers:
  * `p1` pointing to the end of initial elements in `nums1`
  * `p2` pointing to the end of `nums2`
  * `p` pointing to the last position in `nums1`
* Compare values from `nums1` and `nums2` from the back, and place the larger one at the current `p` position.
* If any elements remain in `nums2`, copy them into `nums1`.

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨