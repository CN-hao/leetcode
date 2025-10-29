/*
 * @lc app=leetcode.cn id=3370 lang=golang
 * @lcpr version=30204
 *
 * [3370] 仅含置位位的最小整数
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func smallestNumber(n int) int {
    x := 1
    for x < n {
        x = x*2 + 1
    }
    return x
}
// @lc code=end



/*
// @lcpr case=start
// 5\n
// @lcpr case=end

// @lcpr case=start
// 10\n
// @lcpr case=end

// @lcpr case=start
// 3\n
// @lcpr case=end

 */

