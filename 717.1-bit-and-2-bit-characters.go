/*
 * @lc app=leetcode.cn id=717 lang=golang
 * @lcpr version=30204
 *
 * [717] 1 比特与 2 比特字符
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func isOneBitCharacter(bits []int) bool {
    i:=0
	for i<len(bits)-1 {
		if bits[i]==0 {
			i++
		}else{
			i+=2
		}
	}
	return i!=len(bits)
}
// @lc code=end



/*
// @lcpr case=start
// [1, 0, 0]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,1,0]\n
// @lcpr case=end

 */

