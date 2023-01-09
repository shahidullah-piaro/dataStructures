#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1);
    //Time Complexity
    // n/2 + n/3 + n/4 + n/5 + ....
    // O(n log n)
    for(int i=2;i<=n;i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            for(int x=2;i*x<=n;x++)
            {
                visited[i*x] = true;
            }
        }
    }
    cout<<primes.size()<<endl;
    for(int i=0;i<primes.size();i++)
        cout<<primes[i]<<" ";
    cout<<endl;
    return 0;
}
