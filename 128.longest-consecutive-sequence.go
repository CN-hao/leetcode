/*
 * @lc app=leetcode.cn id=128 lang=golang
 * @lcpr version=30204
 *
 * [128] 最长连续序列
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func longestConsecutive(nums []int) int {
	numSet := make(map[int]bool)
	for _, num := range nums {
		numSet[num] = true
	}
	
	longestStreak := 0
	for num := range numSet {
		if !numSet[num-1] {
			currentNum := num
			currentStreak := 1
			
			for numSet[currentNum+1] {
				currentNum += 1
				currentStreak += 1
			}
			
			if currentStreak > longestStreak {
				longestStreak = currentStreak
			}
		}
	}
	
	return longestStreak
}
// @lc code=end



/*
// @lcpr case=start
// [100,4,200,1,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,3,7,2,5,8,4,6,0,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,0,1,2]\n
// @lcpr case=end

 */

