// link  https://codeforces.com/problemset/problem/228/A
#include <iostream>
using namespace std;
#include <set>
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout<<endl;

    int sm = 4 -  s.size() ;
    cout<<sm;
    return 0;
}