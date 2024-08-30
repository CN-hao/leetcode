/*
 * @lc app=leetcode.cn id=3153 lang=cpp
 * @lcpr version=30204
 *
 * [3153] 所有数对中数位不同之和
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start

//水
//可以少写一个循环
class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int len=0;
        int t=nums[0];  
        do{
            len++;
        }while(t/=10);
        vector<vector<int>> cnt(len, vector<int>(10));
        for (int num : nums) {
            for(int i=0;i<len;i++){
                cnt[i][num%10]++;
                num/=10;
            }
        }
        long long ans=0;
        for(int i=0;i<len;i++){
            for(int j=0;j<9;j++){
                if(cnt[i][j]!=0) {
                    for(int k=j+1;k<10;k++){
                        if(cnt[i][k]!=0){
                            ans+=(long long )cnt[i][j]*cnt[i][k];
                        }
                    }
                }
            }
        }
        return ans;

    }
};
// @lc code=end



/*
// @lcpr case=start
// [13,23,12]\n
// @lcpr case=end

// @lcpr case=start
// [10,10,10,10]\n
// @lcpr case=end

 */

