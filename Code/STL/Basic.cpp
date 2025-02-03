#include<bits/stdc++.h>
using namespace std;

int main()
{
    //  Pair...
    pair<int, int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int, int>> q = {3,{4,5}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int, int> arr[] = {{6,7},{8,9},{10,11}};
    cout<<arr[1].second<<endl;  // 1st index er second value print korbe..because arr[1] means 1st index and .second means 2nd value of this index


    vector<int>v;
    v.push_back(1);     // {1}
    v.emplace_back(2);  // {1,2}

    vector<pair<int, int>>vec;
    vec.push_back({3,4});   //{1,2}
    v.emplace_back(5,6);    // not carlibracec

    vector<int> v(5,100);   // 1st value is index size and the second value is assign 100 in this 5 index..if we can't declare the second value [(5);] then initially all index assign with 0 value
    vector<int> v(5);

    // Copy vector
    vector<int> v1(5,100);
    vector<int> v2(v1);  //copy from v1 vector

    // Access element in a vector
    vector<int> v = {10, 20, 30,40,50,60,70};
    vector<int>:: iterator access = v.begin();      // here access is just a simple name  like variabla
    access++;
    cout<< *(access) <<" "<<endl;     // here v.begin are going to memory of v array index portion what i want the index output(accss/point the memory location(s)) and the *(v.begin) accessed the element
    access += 2;
    cout<< *(access) <<" "<<endl;
    cout<<v[0]<<" "<<v.at(1)<<endl;
    cout<<v.back()<<" "<<endl;
    for(vector<int>:: iterator access = v.begin(); access!=v.end(); access++){
        cout<< *(access) <<" ";
    } cout<<endl;
    for(auto access = v.begin(); access!=v.end(); access++){
        cout<<*(access)<<" ";
    } cout<<endl;
    for(auto access : v){
        cout<<access<<" ";
    } cout<<endl;

    // Erase...
    // One element Erase...
    vector<int> v = {10, 20, 30,40,50,60,70};
    v.erase(v.begin()+1);   //{10,30,40,50,60,70}   // erase 1st index(20)
    // In a range element erase....
    vector<int> v = {10, 20, 30,40,50,60,70};
    v.erase(v.begin()+2, v.begin()+4);  // {10,20,50,60,70}  // erase er khetre end deleter(2nd portion) er jonno jei porjonto dlt likhbo tar age porjnoto dlt hobe..eikhane end mane 2nd portion e 4 lekha hoice sejonn eita 3 tomo porjonto dlt korbe.



    // Insert 
    vector <int> v(2,100);          // {100,100}
    v.insert(v.begin(),300);        //{300,100,100}
    v.insert(v.begin()+1, 2, 10)        //{300,10,10,100,100}

    vector <int> copy(30,40);                       // { 30,40}
    v.insert(v.begin(), copy.begin(), copy.end());  // {30,40,}



    // list
    list <int> ls;
    ls.push_back(2);        // {2}
    ls.emplace_back(4);     // {2,4}
    ls.push_front(1);       // {1,2,4}
    ls.emplace_front();     // {2,4}



    // Deque -> similar to list and vector
    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    deque <int> dq;
    dq.push_back(1);                // {1}
    dq.emplace_back(2);             // {1,2}
    dq.push_front(3);               // {1,2,3}
    dq.emplace_front(3);            // {3,1,2,3}
    dq.pop_back();                  // {3,1,2}
    dq.pop_front();                 // {1,2}
    dq.back();
    dq.front();



    // stack -> LIFO(Last In Front Out)
    // Time complexivity 0(1)
    stack <int> st;
    st.push(1);         // {1}
    st.push(2);         // {2,1}
    st.push(3);         // {3,2,1}
    st.push(3);         // {3,3,2,1}
    st.emplace(5);      // {5,3,3,2,1}

    cout<<st.top();     //prints 5 "** st[2]"is invalid**"
    st.pop();           // st looks like{3,3,2,1}
    cout<<st.top();     // 3
    cout<<st.size();    // 4
    cout<<st.empty();

    stack <int> st1,st2;
    st1.swap(st2);



    // Queue -> FIFO(First In First Out)
    // Time complexivity 0(1)
    queue <int> qu;
    qu.push(1);         // {1}
    qu.push(2);         // {2,1}
    qu.emplace(3);      // {3,2,1}

    qu.back() += 5;
    cout<<qu.back();     // prints 9
    // {1,2,9}
    cout<<qu.front();    // prints 1
    qu.pop();            // {2,9}
    cout<<qu.front();    // print 2
    // size, swap, empty same as stack



    // priority_queue(Max Heap)
    priority_queue <int> pq;
    pq.push(5);         // {5}
    pq.push(2);         // {5,2}
    pq.push(8);         // {8,5,2}
    pq.push(10);         // {10,8,5,2}
    pq.emplace(3);      // {10,8,5,3,2}

    cout<<pq.top();     // prints 10
    pq.pop();           //  {8,5,3,2}
    cout<<pq.top();     // prints 8
    // size, swap, empty function same as others

    // priority_queue(Min Heap) 
    priority_queue < int, vector<int>, greater<int>>minpq;
    pq.push(5);         // {5}
    pq.push(2);         // {2,5}                                            // Time complexivity
    pq.push(8);         // {2,5,8}                                          //   .push -> logn
    pq.emplace(10);     // {2,5,8,10}                                       //   .top -> O(1)
                                                                            //   .pop -> logn
    cout<<minpq.top();  // prints 2




    // set -> everithing sorted and unique
    // time complexivity (longN)
    set <int> setf;
    setf.insert(1);                     // {1}
    setf.emplace(2);                    // {1,2}
    setf.insert(2);                     // {1,2}
    setf.insert(4);                     // {1,2,4}
    setf.insert(3);                     // {1,2,3,4}
    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency
    // begin(), end(), rbegin(), rend(), size()
    // empty(), and swap() are same as those of above

    //{1,2,3,4,5}
    auto it = setf.find(3);
    //{1,2,3,4,5}
    auto it = setf.find(6);
    //{1,4,5}
    setf.erase(5);                  // erase 5  // takes logarithomic time

    int cnt = setf.count(1);        // if there are one or more than 1 to count 1 or count 0, because the set are stored unique value.
    auto it = setf.find(3);
    setf.erase(it);                 // it takes constant time

    //{1,2,3,4,5}
    auto it1 = setf.find(2);
    auto it2 = setf.find(4);
    setf.erase(it1,it2);            // after erase {1,4,5} [first, last]
    //lower bound() and upper bound() function works in the same way
    // as in vector it dose.
    auto it = setf.lower_bound(2);
    auto it = setf.upper_bound(3);





    // multiset -> only sorted not unique
    // everything is same as set
    //only stores duplicate elements also
    multiset <int> ms;
    ms.insert(1);               // {1}
    ms.insert(1);               // {1,1}
    ms.insert(1);               // {1,1,1}

    ms.erase(1);                // all 1's erased
    int cnt = ms.count(1);

    ms.erase(ms.find(1));       // only a single one erased
    ms.erase(ms.find(1), ms.find(1)+2);         // ___.erase(start, end);
    // erase(element); -> it erase all element
    // erase(address); -> it erase only this portions

    // rest all function same as set




    //unordered_set -> stored only unuque element not sorted
    // time complexivity -> O(1)
    // worst case in lenear time time complexivity -> O(N)
    unordered_set <int> uos;
    // all the function work except lower_bound and upper_bound function





    // map -> stored unuque key in sorted ordered something similar to set data structure
    // time complexivity -> (logN)
    map <int, int> mpp;
    map<int, pair<int, int>> mapp;
    map< pair<int, int>, int> mpp;      // mpp[{2,3}] = 10;

    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}] = 10;
    {   // all are sorted form...key are sorted ...
        {1,2}
        {2,4}
        {3,1}
    }

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;       // first print key than print value
    }
    cout<<mapp[1];              // it  print value of 2;
    cout<<mpp[6];               // it print value of 0 or null, because there were no key of 6

    auto it = mpp.find(3);
    cout<< *(it).second;        // * for accesses and value for .second

    auto it = mpp.find(5);      // there were no key of 5 it points to mpp.end() that means after the map

    // This is the syntax
    auto it = lower_bound(2);
    auto it = upper_bound(2);

    // erase, swap, size, empty are same as above





    // multimap -> everthing is duplicated and sorted order
    // everything same as map, only it can store multiple keys
    // only mapp[key] cannot be used here
    multimap<int, int> mmm;



    // unorderedmap -> stored duplicated and unique key but not sorted
    //same as set and unordered_set
    // time complexivity -> O(1) 
    // In worst cases time complexivity -> O(N)
    unordered_map<int, int>unompp;





    //                              Algorithm                   //


    // sort()
    sort(v,v+n);                        // sort(start, end); here n is size and v is start iterator and v+n is end iterator
    sort(v.bigin(), v.end());
    












    return 0;
}