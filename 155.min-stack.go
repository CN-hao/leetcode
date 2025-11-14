/*
 * @lc app=leetcode.cn id=155 lang=golang
 * @lcpr version=30204
 *
 * [155] 最小栈
 */


// @lcpr-template-start

// @lcpr-template-end
// @lc code=start
type MinStack struct {
	stack   []int
	minVal 	int
}

func Constructor() MinStack {
	return MinStack{
		stack:  	[]int{},
		minVal: 	1<<31 - 1,
	}
}

func (this *MinStack) Push(val int)  {
	diff:= val - this.minVal
	this.stack = append(this.stack, diff)
	if val < this.minVal {
		this.minVal = val
	}
}

func (this *MinStack) Pop()  {
	if len(this.stack) == 0 {
		return
	}
	diff := this.stack[len(this.stack)-1]
	this.stack = this.stack[:len(this.stack)-1]
	if diff < 0 {
		this.minVal = this.minVal - diff
	}
}
func (this *MinStack) Top() int {
	if len(this.stack) == 0 {
		return 0
	}
	diff := this.stack[len(this.stack)-1]
	if diff < 0 {
		return this.minVal
	}
	return this.minVal + diff
}
func (this *MinStack) GetMin() int {
	return this.minVal
}


/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */
// @lc code=end



/*
// @lcpr case=start
// ["MinStack","push","push","push","getMin","pop","top","getMin"][[],[-2],[0],[-3],[],[],[],[]]\n
// @lcpr case=end

 */

