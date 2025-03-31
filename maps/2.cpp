#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,pair<int,int>> m; //{key, value :<pair>}
    m[2]={2,3};
    m[8]={-1,82};
    m[4]={0,56};

    for(auto i: m)
    {
        cout<<i.first<< " => "<<i.second.first<<" "<<i.second.second<<endl;
    }
    return 0;
}