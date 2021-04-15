//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//An input string is valid if:

//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.

class Solution {
public:
   
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(!st.empty()){
                if(s[i]=='('||s[i]=='{'||s[i]=='['){
                    st.push(s[i]);
                }else{
                    if(s[i]==')' && st.top()=='('){
                        st.pop();
                    }else if(s[i]=='}' && st.top()=='{'){
                        st.pop();
                    }else if(s[i]==']' && st.top()=='['){
                        st.pop();
                    }else{
                        st.push(s[i]);
                    }
                }
            }else{
                st.push(s[i]);
            }            
        }
        if(st.size()==0){
            return true;
        }else{
            return false;
        }
    }
};
