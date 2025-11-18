/*
 * @lc app=leetcode.cn id=438 lang=golang
 * @lcpr version=30204
 *
 * [438] 找到字符串中所有字母异位词
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
func findAnagrams(s string, p string) []int {
    pl,sl:=len(p),len(s)
	ans:=[]int{}
	if sl<pl{
		return ans
	}
	arr:=[26]int{}
	arr2:=[26]int{}
	for i:=0;i<pl;i++{
		arr[p[i]-'a']++
		arr2[s[i]-'a']++
	}
	if arr==arr2{
		ans=append(ans,0)
	}
	for i:=pl;i<sl;i++{
		j:=i-pl
		arr2[s[i]-'a']++
		arr2[s[j]-'a']--
		if arr2==arr{
			ans=append(ans,j+1)
		}
	}
	return ans
}
// @lc code=end



/*
// @lcpr case=start
// "cbaebabacd"\n"abc"\n
// @lcpr case=end

// @lcpr case=start
// "abab"\n"ab"\n
// @lcpr case=end

 */

