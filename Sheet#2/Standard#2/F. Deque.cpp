#include <bits/stdc++.h>

using namespace std;

string s;
int q , x;
deque<int>dq;

void Jerry(){
 while(q--){
   cin >> s;
   if(s == "push_back"){
     cin >> x;
     dq.push_back(x);
   }
   else if(s == "push_front"){
         cin >> x;
         dq.push_front(x);
     }
   else if(s == "pop_front" && !dq.empty()){
      dq.pop_front();
   }
   else if(s == "pop_back" && !dq.empty()){
       dq.pop_back();
   }
   else if(s == "front") cout << dq.front() << endl;
   else if(s == "back") cout << dq.back() << endl;
   else {
      cin >> x;
      cout << dq[--x] << endl;
   }
 }
}

int main()
{
    cin >> q;
    Jerry();
    return 0;
}
