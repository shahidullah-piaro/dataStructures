#include<bits/stdc++.h>

using namespace std;

void print_vector(vector<int> &vect)
{
    for (auto i = vect.begin(); i != vect.end(); ++i)
    {
        cout<< *i << " ";
    }
}

vector<int> myFunction(vector<int> &results)
{
    vector <int> even_vector;
    for (const auto &i : results)
    {
        if(i%2==0)
        {
            even_vector.push_back(i);
        }
    }
    return even_vector;
}

int main()
{
    vector<int> vec= {20, 51, 11, 88, 44};
    vector<int> even_vect=myFunction(vec);
    print_vector(even_vect);
}
