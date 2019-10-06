class Solution 
{
public:
    stack<char> st;
    bool isValid(string s) 
    {
            for(int i=0;i<s.length();i++)
            {
                if( (st.size() ==0) &&  (s[i]==')' || s[i]==']' || s[i]=='}' || s[i]=='>')) return false;
              
                if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<')
                {
                    st.push(s[i]);
                }
                else if( (s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') ||
						 (s[i]=='}' && st.top()=='{') || (s[i]=='>' && st.top()=='<')   ) 
                {
                    st.pop();
                }else return false;
            }
            return st.empty();
    }
};