    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        string s; cin >> s;                                
        stack<char>st;
        for(auto it:s) {
            if(it == '{' || it == '[' || it == '(') {
                st.push(it);
            }
            else {
                if(st.empty()) {              //[)
                    cout << "NO" << endl;
                    return 0;
                }
                else if(it == ')' && st.top() == '('){
                    st.pop();
                }
                else if(it == ']' && st.top() == '[') {
                    st.pop();
                }
                else if(st.top() == '{') {
                    st.pop();
                }
            }
     
        }
        st.size() == 0? cout << "YES" << endl : cout << "NO" << endl;
        return 0;
        
      }