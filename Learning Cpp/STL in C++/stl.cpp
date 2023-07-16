#include<bits/stdc++.h>
using namespace std;

void pairs() {
    pair<int, int> p {1, 2};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p1 {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    for (auto x : arr) {
        cout << x.first << " " << x.second << endl;
    }

}

void vectors() {
    vector<int> v;
    v.push_back(1);
    // emplace_back is faster than push_back
    v.emplace_back(2);
    
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    // emplace back creates the pair in place
    v1.emplace_back(3, 4);
    for (auto x : v1) {
        cout << x.first << " " << x.second << endl;
    }

    vector<int> v3(5, 0);
    for (auto x : v3) {
        cout << x << " ";
    }
    cout << endl;
    v3.push_back(1);

    vector<int> v4(v3);
    for (auto x : v4) {
        cout << x << " ";
    }
    cout << endl;
    // iterators
    vector<int>::iterator it = v3.begin();
    
    cout << *it << endl;

    vector<pair<int, int>>::iterator it1 = v1.begin();

    cout << it1->first << " " << it1->second << endl;

    it1++;
    cout << it1->first << " " << it1->second << endl;
    // other iterators: rbegin, rend, cbegin, cend, crbegin, crend
    // end points to the next of the last element
    // rbegin points to the last element
    // rend points to the element before the first element
    // cbegin, cend, crbegin, crend are const iterators
    vector<int> v5 {1, 2, 3, 4, 5};
    vector<int>::iterator it2 = v5.end();
    // it2 points to the next of the last element
    it2--;
    cout << *it2 << endl;
    // rbegin moves in the reverse direction
    vector<int>::reverse_iterator rit = v5.rbegin();
    cout << *rit << endl;
    rit++;
    cout << *rit << endl;

    cout << v5.back() << endl;

    // printing vector using iterators
    // for(vector<int>::iterator it3 = v5.begin(); it3 != v5.end(); it3++) {
    //     cout << *it3 << " ";
    // }
    // cout << endl;
    for (auto it3 = v5.begin(); it3 != v5.end(); it3++) {
        cout << *it3 << " ";
    }
    cout << endl;

    // erase 
    // erase takes the iterator of the element to be deleted, till the element before which we want to delete
    // erase returns the iterator of the element after the last element deleted
    vector<int> v6 {1, 2, 3, 4, 5};
    vector<int>::iterator it4 = v6.begin();
    it4++;
    v6.erase(it4, it4 + 2);
    v6.insert(v6.begin() + 1, 2, 10);
    // cout << "v6" << endl;
    // for (auto x : v6) {
    //     cout << x << " ";
    // }
    // cout << endl;
    vector<int> v7 {1, 2, 3, 4, 5};
    v7.insert(v7.begin() + 1,v6.begin(), v6.end());
    cout << "v7" << endl;
    for (auto x : v7) {
        cout << x << " ";
    }
    cout << v.empty() << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;

}

void lists() {
    // front operations in lists are faster than vectors
    list<int> l {1, 2, 3, 4, 5};
    l.push_back(6);
    l.push_front(0);
    l.emplace_front(-1);
    l.emplace_back(7);
    for (auto x : l) {
        cout << x << " ";
    }
}

void dequeue() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(3);
    dq.emplace_front(4);
    cout << dq.front() << " " << dq.back() << endl;
    for (auto x : dq) {
        cout << x << " ";
    }
}

int main() {
    // pairs();
    // vectors();
    // lists();
    dequeue();
    return 0;
}