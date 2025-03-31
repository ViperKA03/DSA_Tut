#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<pair<int,pair<int,int>>> v={{1,{2,3}}, {4,{5,6}}};
    for(auto i: v)
    {
        cout<<i.first<<i.second.first<<i.second.second<<endl;
    }
    return 0;
}
