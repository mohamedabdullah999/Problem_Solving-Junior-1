#include <bits/stdc++.h>

using namespace std;

int q , e;
string s;
stack <int> st;

void Jerry(){
  cin >> q;
  while(q--){
    cin >> s;
    if(s == "push"){
      cin >> e;
      st.push(e);
    }
    else if(s == "pop" && !st.empty()) {
        st.pop();
    }
    else{
      cout << st.top() << endl;
    }
  }
}

int main()
{
    Jerry();
    return 0;
}
