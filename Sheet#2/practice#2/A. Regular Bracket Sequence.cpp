#include <bits/stdc++.h>

using namespace std;

stack <char> st;

int Jerry() {
   string s; cin >> s;
   int rem = 0 , i = 0;
   for(auto c : s) {
       ++i;
      if(c == '(') st.push(c);
      else if(!st.empty()) st.pop();
      else rem++;
   }
   return s.size() - rem - st.size();
}

int main() {
  cout << Jerry() << endl;
  return 0;
}
