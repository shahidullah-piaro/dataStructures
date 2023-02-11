#include <bits/stdc++.h>

using namespace std;

void deleteValue(list<int> & listOfInts, int value)
{
    auto itr = find(listOfInts.begin(), listOfInts.end(), value);

    if (itr != listOfInts.end())
    {
        listOfInts.erase(itr);
    }

    for (auto it = listOfInts.begin(); it != listOfInts.end(); ++it)
    {
        cout << ' ' << *it;
    }
}

int main()
{
    list<int> listOfInts{ 7, 3, 8, 4, 5, 4 };

    deleteValue(listOfInts,4);

    return 0;
}
