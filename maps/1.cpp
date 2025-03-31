#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m ={{2,3},  {7,8},{4,5}}; // {key,value}
    for(auto i:m)
    {
        cout<< i.first<<" => "<<i.second <<endl;
    }
    return 0;
}