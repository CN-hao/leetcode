/*
 * @lc app=leetcode.cn id=11 lang=golang
 * @lcpr version=30204
 *
 * [11] 盛最多水的容器
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func maxArea(height []int) int {
    i,j:=0,len(height)-1
	maxA:=0
	for i<j {
		h:=0
		if height[i]<height[j] {
			h=height[i]
			area:=h*(j-i)
			if area>maxA {
				maxA=area
			}
			i++
		}else{
			h=height[j]
			area:=h*(j-i)
			if area>maxA {
				maxA=area
			}
			j--
		}
	}
	return maxA
}
// @lc code=end



/*
// @lcpr case=start
// [1,8,6,2,5,4,8,3,7]\n
// @lcpr case=end

// @lcpr case=start
// [1,1]\n
// @lcpr case=end

 */

