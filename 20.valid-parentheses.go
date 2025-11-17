/*
 * @lc app=leetcode.cn id=20 lang=golang
 * @lcpr version=30204
 *
 * [20] 有效的括号
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func isValid(s string) bool {
	ss:=[]rune{' '}
	m:=map[rune]rune{
		')':'(',
		']':'[',
		'}':'{',
	}
	for _,c := range s{
		top:=ss[len(ss)-1]
		if _,ok:=m[c]; ok {
			if top==m[c] {
				ss=ss[:len(ss)-1]
			}else{
				return false
			}
		}else{
			ss=append(ss,c)
		}
	}
	return len(ss)==1
}
// @lc code=end




/*
// @lcpr case=start
// "()"\n
// @lcpr case=end

// @lcpr case=start
// "()[]{}"\n
// @lcpr case=end

// @lcpr case=start
// "(]"\n
// @lcpr case=end

// @lcpr case=start
// "([])"\n
// @lcpr case=end

// @lcpr case=start
// "([)]"\n
// @lcpr case=end

 */

