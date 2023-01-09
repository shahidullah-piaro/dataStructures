#include<bits/stdc++.h>

using namespace std;

    void func(int x)
    {
        int *p = new int;
        *p = x;
        cout<<*p<<endl;
        return;
    }

int main()
{
    func(5);
    return 0;
}
