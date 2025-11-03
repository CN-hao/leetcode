/*
 * @lc app=leetcode.cn id=1578 lang=golang
 * @lcpr version=30204
 *
 * [1578] 使绳子变成彩色的最短时间
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func minCost(colors string, neededTime []int) int {
	n:=len(colors)
	last:=byte(0)
	_max:=0
	res:=0
	for i:=0;i<n;i++{
		if colors[i]!=last{
			res-=_max
			_max=neededTime[i]
		}
		_max=max(_max,neededTime[i])
		last=colors[i]
		res+=neededTime[i]
	}
	return res-_max
}
// @lc code=end



/*
// @lcpr case=start
// "abaac"\n[1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// "abc"\n[1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// "aabaa"\n[1,2,3,4,1]\n
// @lcpr case=end

 */

