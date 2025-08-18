/*
 * @lc app=leetcode.cn id=679 lang=cpp
 * @lcpr version=30204
 *
 * [679] 24 点游戏
 */

// @lc code=start
class Solution {
private:
    bool fun(vector<float>& cards){
        int c=0;
        float sum=0;
        for(int i=0;i<4;++i){
            if(cards[i]){
                for(int j=i+1;j<4;++j){
                    if(cards[j]){
                        float a=cards[i];
                        float b=cards[j];
                        cards[i]=0;
                        cards[j]=0;
                        cards[i]=a+b;
                        if(fun(cards)) return true;
                        cards[i]=a-b;
                        if(fun(cards)) return true;
                        cards[i]=a*b;
                        if(fun(cards)) return true;
                        cards[i]=a/b;
                        if(fun(cards)) return true;
                        cards[i]=b-a;
                        if(fun(cards)) return true;
                        cards[i]=b/a;
                        if(fun(cards)) return true;
                        cards[i]=a;
                        cards[j]=b;
                    }
                }
                ++c;
                sum=cards[i];
            }
        }
        if(c==1&&fabs(sum-24)<1e-5){
            return true;
        }
        return false;
    }
public:
    bool judgePoint24(vector<int>& cards) {
        vector<float> vec(4);
        for(int i=0;i<4;++i){
            vec[i]=cards[i];
        }
        return fun(vec);
    }
};
// @lc code=end



/*
// @lcpr case=start
// [4, 1, 8, 7]\n
// @lcpr case=end

// @lcpr case=start
// [1, 2, 1, 2]\n
// @lcpr case=end

 */

