#include bitsstdc++.h

using namespace std;

stackstring st;

string Jerry() {
    int q, i = 1;
    cin  q;
    
    string s;
    int n = q;

    while (q--) {
        cin  s;

        if ((i == 1 && s != Header)  (s == EndHeader && i != n)) 
            return WA;

        if ((s.find(EndT) == 0 && st.top() == Table)  
            (s.find(EndR) == 0 && st.top() == Row)  
            (s.find(EndC) == 0 && st.top() == Cell)) 
        {
            if (!st.empty()) 
                st.pop();
        } 
        else {
            st.push(s);
        }
        
        i++;
    }

    if (st.top() == EndHeader) {
        st.pop();
        if (!st.empty() && st.top() == Header) {
            return ACC;
        }
    }

    return WA;
}

int main() {
    cout  Jerry()  endl;
    return 0;
}
