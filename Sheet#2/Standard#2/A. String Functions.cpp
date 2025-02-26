    #include <iostream>
    #include <set>
    #include <string>
    #include <vector>
    #include <algorithm>
     
    using namespace std;
     
    int n , Q , l , r;
     
    bool is1100(const string &v, int pos) {
        return pos >= 0 && pos + 3 < v.size() && v.substr(pos, 4) == "1100";
    }
     
    int solve() {
        int n,query;
        cin>>n>>query;
     
        string txt;
        cin>>txt;
     
        int x,y,pos;
     
     
        while(query--){
     
            string op;
            cin>>op;
     
            if(op=="pop_back"){
                txt.pop_back();
            }
            else if(op=="front"){
                cout<<txt.front()<<endl;
            }
            else if(op=="back"){
                cout<<txt.back()<<endl;
            }
            else if(op=="sort")
            {
                cin>>x>>y;
                if(x>y) swap(x,y);
     
                sort(txt.begin()+x-1,txt.begin()+y);
            }
            else if(op=="reverse")
            {
                cin>>x>>y;
                if(x>y) swap(x,y);
                reverse(txt.begin()+x-1,txt.begin()+ y);
            }
            else if(op=="print")
            {
                cin>>pos;
                cout<<txt[pos-1]<<endl;
            }
            else if(op=="substr")
            {
                cin>>x>>y;
                if(x>y) swap(x,y);
     
                string ans=txt.substr(x-1,(y-x)+1);
                cout<<ans<<endl;
            }
            else{
                char v;
                cin>>v;
                txt.push_back(v);
            }
     
        }
    }
     
    int main() {
        solve();
        return 0;
    }