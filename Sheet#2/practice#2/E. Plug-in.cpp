#include <bits/stdc++.h>
using namespace std;

stack <char> st;

string Jerry(string s){
   for(auto i:s){
    if(!st.empty() && i == st.top()) st.pop();
    else st.push(i);
   }

    string res = "";
    while(!st.empty()){res += st.top(); st.pop();}
    reverse(res.begin() , res.end());
    return res;
}

int main() {
  string s;
  cin >> s;
  cout << Jerry(s) << endl;
  return 0;
}
