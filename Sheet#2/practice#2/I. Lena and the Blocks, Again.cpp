#include <bits/stdc++.h>
using namespace std;

bool flag = false;
void Jerry_3(){
   vector <int> v;
   int x , n; cin >> n;
   for(int i = 0; i < n; i++){
     cin >> x;
     v.push_back(x);
   }
   int maxxx = *max_element(v.begin(), v.end());
   int minnn = *min_element(v.begin(), v.end());
   int last_minn = -1 , last_maxx = -1 , min_dis = INT_MAX;
   for(int i = 0; i < n; i++){
     if(v[i] == minnn){
       if(last_maxx != -1) min_dis = min(min_dis , abs(i - last_maxx));
       last_minn = i;
     }
     else if(v[i] == maxxx){
       if(last_minn != -1) min_dis = min(min_dis , abs(i - last_minn));
       last_maxx = i;
     }
   }
   if(min_dis == INT_MAX) {cout << 0 << endl;return;}
   cout << min_dis << endl;
}

void Jerry_2(){
   string s;int x;
   int q; cin >> q;
   deque <int> dq;
   while(q--){
     cin >> s;
     if(s == "back") {if(!dq.empty()){cout << dq.back() << endl;dq.pop_back();}else cout << "No job for Ada?\n";}
     else if(s == "front") { if(!dq.empty()){cout << dq.front() << endl;dq.pop_front();}else cout << "No job for Ada?\n";}
     else if(s == "reverse") {reverse(dq.begin() , dq.end());}
     else if(s == "push_back") {cin >> x;dq.push_back(x);}
     else { cin >> x;dq.push_front(x);}
   }
}

void Jerry() {
   list <char> li;
    string s;
    while (getline(cin, s)) {
        auto it = li.begin();
        for(auto ch : s){
           if(ch == '[')it = li.begin();
           else if(ch == ']') it = li.end();
           else li.insert(it , ch);
        }
        for (char c : li) cout << c;
        cout << "\n";
        li.clear();
    }
}

bool genereatedt(string x , string value){
    if(x == "string"){
       string y = value;

    }
    else if(x == "int"){
        int y = stoi(value);
        return y;
    }

}

int main() {
    //deque <int> dq = {1 , 2 , 3 , 4};
    //cout << *dq.begin();
    //Jerry();
    //Jerry_2();
    /*vector <int> v = {1 , 2 , 3, 4 , 3 , 4};
    int maxx = *max_element(v.begin() , v.end());
    auto it = find(v.begin() , v.end() , maxx);
    int index = distance(v.begin(), it); // find first index appear
    cout << index << endl;
    */
    Jerry_3();
    return 0;
}