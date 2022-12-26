#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 4, b = 5;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    int x = 7, y = 9, z = 10;
    int minn = min(x,y);
    int minnn = min({x,y,z});
    cout<<minn<<endl;
    cout<<minnn<<endl;

    int maxx = max(x,y);
    int maxxx = max({x,y,z});
    cout<<maxx<<endl;
    cout<<maxxx<<endl;


    return 0;
}
