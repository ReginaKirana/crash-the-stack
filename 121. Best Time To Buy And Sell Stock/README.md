# 121. Best Time to Buy and Sell Stock

**Difficulty:** Easy  
**Link:** [LeetCode Problem](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

---

## 📝 Problem Statement

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i`-th day.

You want to maximize your profit by choosing a single day to **buy** one stock and choosing a different day in the future to **sell** that stock.

Return the **maximum profit** you can achieve from this transaction.  
If you cannot achieve any profit, return `0`.

---

## 💡 Examples

### Example 1
**Input:**  
`prices = [7,1,5,3,6,4]`

**Output:**  
`5`

**Explanation:**  
Buy on day 2 (price = 1) and sell on day 5 (price = 6).  
Profit = 6 - 1 = 5.  
Buying on day 2 and selling on day 1 is not allowed since you must buy before you sell.

---

### Example 2
**Input:**  
`prices = [7,6,4,3,1]`

**Output:**  
`0`

**Explanation:**  
In this case, no profitable transaction can be made. All prices are decreasing.

---

## ✅ Constraints

* `1 <= prices.length <= 10⁵`
* `0 <= prices[i] <= 10⁴`

---

## 🔑 Key Ideas

* Track the **minimum price** seen so far while iterating through the array.
* At each step, calculate the potential **profit** by subtracting the minimum price from the current price.
* Update the **maximum profit** if this profit is higher than the previous one.
* This ensures a **single-pass O(n)** time solution with **O(1)** space.

---

**Note:**  
The clean solution code in C++ and Python is available in this folder for reference and practice. ✨