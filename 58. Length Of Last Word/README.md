# 58. Length of Last Word

**Difficulty:** Easy  
**Link:** [LeetCode Problem](https://leetcode.com/problems/length-of-last-word/)

---

## 📝 Problem Statement

Given a string `s` consisting of words and spaces, return the **length of the last word** in the string.

A **word** is a maximal substring consisting of **non-space characters only**.

---

## 💡 Examples

### Example 1  
**Input:**  
`s = "Hello World"`  
**Output:**  
`5`  

**Explanation:**  
The last word is `"World"` with length `5`.

---

### Example 2  
**Input:**  
`s = "   fly me   to   the moon  "`  
**Output:**  
`4`  

**Explanation:**  
The last word is `"moon"` with length `4`.

---

### Example 3  
**Input:**  
`s = "luffy is still joyboy"`  
**Output:**  
`6`  

**Explanation:**  
The last word is `"joyboy"` with length `6`.

---

## ✅ Constraints

- `1 <= s.length <= 10⁴`  
- `s` consists of only **English letters** and **spaces `' '`**.  
- There will be **at least one word** in `s`.

---

## 🔑 Key Ideas

- Trim trailing spaces first.
- Then scan from the end of the string until a space is found, counting the number of characters.
- Can be solved with `split()` or manually using pointer from the end.
- Time Complexity: **O(n)**  
- Space Complexity: **O(1)** (in manual version)

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨
