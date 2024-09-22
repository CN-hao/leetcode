/*
 * @lc app=leetcode.cn id=68 lang=cpp
 * @lcpr version=30204
 *
 * [68] 文本左右对齐
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

//好水的困难题
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int width=0;
        int word_count=0;
        size_t i;
        vector<string> ans;
        for(i=0;i<words.size();++i){
            if(width+word_count+words[i].size()>maxWidth){
                string temp(maxWidth,' ');  
                auto spaces=maxWidth-width;
                size_t idx=0;
                for(size_t j=0;j<word_count;++j){
                    temp.replace(idx,words[i-word_count+j].size(),words[i-word_count+j]);
                if(word_count!=1)
                    idx+=words[i-word_count+j].size()+spaces/(word_count-1)+(j<spaces%(word_count-1));
                }
                ans.push_back(temp);
                width=0;
                word_count=0;
            }
            width+=words[i].size();
            word_count++;
        }
        string temp(maxWidth,' ');
        int idx=0;
        for(size_t j=0;j<word_count;++j){
                temp.replace(idx,words[i-word_count+j].size(),words[i-word_count+j]);
                idx+=words[i-word_count+j].size()+1;
            }
        ans.push_back(temp);
        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// ["This", "is", "an", "example", "of", "text", "justification."]\n16\n
// @lcpr case=end

// @lcpr case=start
// ["What","must","be","acknowledgment","shall","be"]\n16\n
// @lcpr case=end

// @lcpr case=start
// ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we"\n20\n
// @lcpr case=end

 */

