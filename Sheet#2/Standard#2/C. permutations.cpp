#include <bits/stdc++.h>

using namespace std;

int n , q , x;
string s , temp , check;

int main()
{
    cin >> n >> q;
    cin >> s;
    while(q--){
       cin >> check >> x;
       if(check == "next_permutation") while(x--) next_permutation(s.begin() , s.end());
       else while(x--) prev_permutation(s.begin() , s.end());
       cout << s << endl;
    }
    return 0;
}
