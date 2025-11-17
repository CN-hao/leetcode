/*
 * @lc app=leetcode.cn id=283 lang=golang
 * @lcpr version=30204
 *
 * [283] 移动零
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func moveZeroes(nums []int)  {
	i:=0
	for j:=0;j<len(nums);j++{
		if nums[j]!=0{
			nums[i]=nums[j]
			i++
		}
	}
	for i<len(nums){
		nums[i]=0
		i++
	}
}
// @lc code=end



/*
// @lcpr case=start
// [0,1,0,3,12]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */

