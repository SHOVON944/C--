#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <int> setf;
    setf.insert(1);                     // {1}
    setf.emplace(2);                    // {1,2}
    setf.insert(2);                     // {1,2}
    setf.insert(4);                     // {1,2,4}
    setf.insert(3);                     // {1,2,3,4}

    auto it = setf.find(3);


    return 0;

}