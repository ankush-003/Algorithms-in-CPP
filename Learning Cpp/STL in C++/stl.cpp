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
    v.empl
}

int main() {
    // pairs();
    vectors();
    return 0;
}