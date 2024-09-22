#include <iostream>
#include <map>
using namespace std;
int main() {
    std::map<int,int> dp={{1,2},{2,3},{3,4}};
    auto it = dp.lower_bound(2);
    cout<<(it==dp.end())<<endl;
    return 0;
}