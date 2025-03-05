#include <bits/stdc++.h>

using namespace std;

string Sm , Sa , Sr;

char Jerry() {
  int ptrm = 0 , ptra = 0, ptrR = 0;
  cin >> Sm >> Sa >> Sr;
  bool flag = 0;
  char check = 'm';
  while(1){
  // ch = m r r
   if(check == 'm'){
     if(ptrm < Sm.size())check = Sm[ptrm++]; // m
     else return 'M';
   }
   else if(check == 'a'){
     if(ptra < Sa.size())check = Sa[ptra++];
     else  return 'A';
   }
   else  {
     if(ptrR < Sr.size())check = Sr[ptrR++];
     else return 'R';
   }
  }
}

int main() {
  cout << Jerry() << endl;
  return 0;
}
