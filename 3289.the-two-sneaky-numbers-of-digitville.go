/*
 * @lc app=leetcode.cn id=3289 lang=golang
 * @lcpr version=30204
 *
 * [3289] 数字小镇中的捣蛋鬼
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func getSneakyNumbers(nums []int) []int {
	m:= make(map[int]bool)
	res := []int{}
	for _, num := range nums {
		if m[num] {
			res = append(res, num)
		} else {
			m[num] = true
		}
	}
	return res
}
// @lc code=end



/*
// @lcpr case=start
// [0,1,1,0]\n
// @lcpr case=end

// @lcpr case=start
// [0,3,2,1,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [7,1,5,4,3,4,6,0,9,5,8,2]\n
// @lcpr case=end

 */

