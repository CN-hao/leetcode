#include <iostream>
#include <map>
int main() {
    std::map<int,int> dp={{1,2},{2,3},{3,4}};
    auto it = dp.lower_bound(2);
    std::cout<<(it==dp.end())<<std::endl;
    return 0;
}
