#include bitsstdc++.h

using namespace std;

string s;
int q , x;
priority_queueint pq;

void Jerry(){
 while(q--){
   cin  s;
   if(s == push){
     cin  x;
     pq.push(x);
   }
   else if(s == pop && !pq.empty()){
      pq.pop();
   }
   else  cout  pq.top()  endl;
 }
}

int main()
{
    cin  q;
    Jerry();
    return 0;
}
