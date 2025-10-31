/*
 * @lc app=leetcode.cn id=1218 lang=golang
 * @lcpr version=30204
 *
 * [1218] 最长定差子序列
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func longestSubsequence(arr []int, difference int) int {
	dp:=make(map[int]int)
	res:=1
    for _, v := range arr {
		ex:=v-difference;
		m:=1
		if val, ok := dp[ex]; ok {
			m=val+1
		}
		dp[v]=max(dp[v],m)
		res=max(m,res)
	}
	return res
}
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,4]\n1\n
// @lcpr case=end

// @lcpr case=start
// [1,3,5,7]\n1\n
// @lcpr case=end

// @lcpr case=start
// [1,5,7,8,5,3,4,2,1]\n-2\n
// @lcpr case=end

 */

