/*
 * @lc app=leetcode.cn id=3143 lang=cpp
 * @lcpr version=30204
 *
 * [3143] 正方形中的最多点数
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
#include <cstring>
// @lcpr-template-end
// @lc code=start

//嚆嚆快跑
__attribute__((constructor)) void func(){
    std::ios::sync_with_stdio(false);
    std::cin.tie();
}
#define abs(x) ((x)>0?(x):-(x))


class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        unsigned int min_no=-1;
        unsigned int ans=0;
        unsigned int n=s.size();
        unsigned char idx;
        unsigned int t;
        vector<unsigned int> yes(26,UINT_MAX);
        for(unsigned int  i=0;i<n;++i){
            t=max(abs(points[i][0]),abs(points[i][1]));
            idx=s[i]-'a';
            if(yes[idx]>t){
                min_no=std::min(yes[idx],min_no);
                yes[idx]=t;
            }else{
                min_no=min(t,min_no);
            }
        }
        return ranges::count_if(yes,[&](unsigned int x){return x<min_no;});

    }
};
// @lc code=end



/*
// @lcpr case=start
// [[2,2],[-1,-2],[-4,4],[-3,1],[3,-3]]\n"abdca"\n
// @lcpr case=end

// @lcpr case=start
// [[1,1],[-2,-2],[-2,2]]\n"abb"\n
// @lcpr case=end

// @lcpr case=start
// [[1,1],[-1,-1],[2,-2]]\n"ccd"\n
// @lcpr case=end

 */

