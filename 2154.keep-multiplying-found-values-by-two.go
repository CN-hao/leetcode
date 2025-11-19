/*
 * @lc app=leetcode.cn id=2154 lang=golang
 * @lcpr version=30204
 *
 * [2154] 将找到的值乘以 2
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func findFinalValue(nums []int, original int) int {
	set := make(map[int]bool)
	for _,v:= range nums{
		set[v]=true
	}
	for set[original]{	
		original*=2
	}
	return original
}
// @lc code=end



/*
// @lcpr case=start
// [5,3,6,1,12]\n3\n
// @lcpr case=end

// @lcpr case=start
// [2,7,9]\n4\n
// @lcpr case=end

 */

