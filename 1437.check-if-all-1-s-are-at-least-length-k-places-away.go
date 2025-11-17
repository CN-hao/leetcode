/*
 * @lc app=leetcode.cn id=1437 lang=golang
 * @lcpr version=30204
 *
 * [1437] 是否所有 1 都至少相隔 k 个元素
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func kLengthApart(nums []int, k int) bool {
	count:=10001
	for _,v:=range nums{
		if v==0 {
			count++
		}else{
			if count<k {
				return false
			}
			count=0
		}
	}
	return true
}
// @lc code=end



/*
// @lcpr case=start
// [1,0,0,0,1,0,0,1]\n2\n
// @lcpr case=end

// @lcpr case=start
// [1,0,0,1,0,1]\n2\n
// @lcpr case=end

 */

