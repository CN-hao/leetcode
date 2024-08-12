/*
 * @lc app=leetcode.cn id=676 lang=cpp
 * @lcpr version=30204
 *
 * [676] 实现一个魔法字典
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
#include <set>
// @lcpr-template-end
// @lc code=start
//水题
class MagicDictionary {
private:
    vector<string> dict;
public:
    MagicDictionary() {

    }
    
    void buildDict(vector<string> dictionary) {
        dict=dictionary;
    }
    
    bool search(string searchWord) {
        for(auto &s:dict)
        {
            if(s.size()!=searchWord.size()) continue;
            int cnt=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]!=searchWord[i]) cnt++;
                if(cnt>1) break;
            }
            if(cnt==1) return true;
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
// @lc code=end



