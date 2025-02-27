#include <bits/stdc++.h>

using namespace std;

queue <int >q;

void Jerry() {
   int q , x , ID; cin >> q;
   while (q--){
     cin >> x >> ID;
     if(x == 1) ::q.push(ID) ;
     else {ID == ::q.front() ? cout << "Yes\n" : cout << "No\n"; ::q.pop();}

   }
}

int main() {
  Jerry();
  return 0;
}
