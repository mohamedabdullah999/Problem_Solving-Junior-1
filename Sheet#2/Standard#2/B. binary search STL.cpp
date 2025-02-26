#include <bits/stdc++.h>

using namespace std;

int n , q , x;
vector<int>v;
int main()
{
    cin >> n >> q;
    int b;
    for(int i = 0; i < n; i++){
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin() , v.end());
    string s;
    bool exist;
    while(q--){
       cin >> s >> x;
       if(s == "binary_search"){
          exist = binary_search(v.begin() , v.end() , x);
           cout << (exist ? "found" : "not found") << endl;
       }
       else if(s == "lower_bound"){
         auto it = lower_bound(v.begin(),v.end() , x);
         cout << ((it != v.end()) ? *it : -1) << endl;
       }
       else{
           auto it = upper_bound(v.begin(),v.end() , x);
           cout << ((it != v.end()) ? *it : -1) << endl;
       }
    }
    return 0;
}
