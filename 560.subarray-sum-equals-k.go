/*
 * @lc app=leetcode.cn id=560 lang=golang
 * @lcpr version=30204
 *
 * [560] 和为 K 的子数组
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func subarraySum(nums []int, k int) int {
	 count, pre := 0, 0
    m := map[int]int{}
    m[0] = 1
    for i := 0; i < len(nums); i++ {
        pre += nums[i]
        if _, ok := m[pre - k]; ok {
            count += m[pre - k]
        }
        m[pre] += 1
    }
    return count
}
// @lc code=end



/*
// @lcpr case=start
// [1,1,1]\n2\n 
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n3\n
// @lcpr case=end

 */

