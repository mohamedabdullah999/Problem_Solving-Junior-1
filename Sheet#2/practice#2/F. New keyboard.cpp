    #include <bits/stdc++.h>
    using namespace std;
     
    bool flag = false;
     
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
        /*deque <int> dq = {1 , 2 , 3 , 4};
        reverse(dq.begin() , dq.begin() + 3);
        for(auto it : dq) cout << it << " " ;
        */
        Jerry();
        //Jerry_2();
        return 0;
    }