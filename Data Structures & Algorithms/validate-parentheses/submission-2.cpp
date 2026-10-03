class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> st;

        for(int i = 0; i<n ; i++){
            switch(s[i]){
                case '(':
                    st.push(s[i]);
                    break;
                case '{':
                    st.push(s[i]);
                    break;
                case '[':
                    st.push(s[i]);
                    break;
            }
            if(st.size() != 0){
            switch(s[i]){
                case ')':
                    if(st.top() == '('){
                        st.pop();
                    }
                    else{return false;}
                    break;
                case '}':
                    if(st.top() == '{'){
                        st.pop();
                    }
                    else{return false;}
                    break;
                case ']':
                    if(st.top() == '['){
                        st.pop();
                    }
                    else{return false;}
                    break;
            }
            }
            else{return false;}
        }
        if(st.size() == 0){
            return true;
        }
    return false;
    }
};
