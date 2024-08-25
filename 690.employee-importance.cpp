/*
 * @lc app=leetcode.cn id=690 lang=cpp
 * @lcpr version=30204
 *
 * [690] 员工的重要性
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

// Definition for Employee.
// class Employee {
// public:
//     int id;
//     int importance;
//     vector<int> subordinates;
// };

//可以排序 二分没写 懒了
class Solution {
int sum=0;
public:
    int getImportance(vector<Employee*> employees, int id) {
        Employee *employee;
        for(int i=0;i<employees.size();i++){
            if(employees[i]->id==id){
                employee=employees[i];
                break;
            }
        }
        sum+=employee->importance;
        for(int i=0;i<employee->subordinates.size();i++){
            getImportance(employees,employee->subordinates[i]);
        }
        return sum;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,5,[2,3]],[2,3,[]],[3,3,[]]]\n1\n
// @lcpr case=end

// @lcpr case=start
// [[1,2,[5]],[5,-3,[]]]\n5\n
// @lcpr case=end

 */

