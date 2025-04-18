#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();

    cout<<st.size();
    return 0;
}