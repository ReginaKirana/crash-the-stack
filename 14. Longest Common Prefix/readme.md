# 14. Longest Common Prefix

**Difficulty:** Easy

**Link:** [LeetCode Problem](https://leetcode.com/problems/longest-common-prefix/)

---

## 📝 Problem Statement

Write a function to find the **longest common prefix string** amongst an array of strings.

If there is no common prefix, return an empty string `""`.

---

## 💡 Examples

### Example 1  
Input: strs = ["flower", "flow", "flight"]  

Output: "fl"

### Example 2  
Input: strs = ["dog", "racecar", "car"]  

Output: ""  

Explanation: There is no common prefix among the input strings.

### Example 3  
Input: strs = ["interspecies", "interstellar", "interstate"]  

Output: "inter"

---

## ✅ Constraints

* 1 <= strs.length <= 200  
* 0 <= strs[i].length <= 200  
* strs[i] consists of only lowercase English letters (if not empty)

---

## 🔑 Key Ideas

* Start by assuming the first string is the initial prefix.
* Compare the prefix with each of the remaining strings:
  * While the current string does not start with the prefix, shorten the prefix from the end.
  * If the prefix becomes empty, return an empty string immediately.
* After all comparisons, return the final prefix.

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
