#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Stack
    stack<int> st;
    //push
    st.push(10);
    st.push(20);
    st.push(30);
    //size
    cout<<st.size()<<endl;
    //top
    cout<<st.top()<<endl;
    //pop
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.size()<<endl;
    return 0;
}
