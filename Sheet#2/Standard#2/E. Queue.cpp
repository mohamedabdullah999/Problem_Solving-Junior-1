#include <bits/stdc++.h>

using namespace std;

string s;
int q , x;
queue<int>Q;

void Jerry(){
 while(q--){
   cin >> s;
   if(s == "push"){
     cin >> x;
     Q.push(x);
   }
   else if(s == "pop" && !Q.empty()){
      Q.pop();
   }
   else if(s == "front") cout << Q.front() << endl;
   else cout << Q.back() << endl;
 }
}

int main()
{
    cin >> q;
    Jerry();
    return 0;
}
