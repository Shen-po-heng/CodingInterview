//20. Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0) //the size of string should be even
            return false;
        stack<char> stack;
        for(int i=0;i<s.size();i++){
            if((s[i]=='(' || s[i]=='[') || s[i]=='{')
               stack.push(s[i]);
            else if(stack.empty()) //if stack is empty, should not check
                return false;
            else if(s[i]==')' && stack.top()!='(')
                return false;
            else if(s[i]==']' && stack.top()!='[')
                return false;
            else if(s[i]=='}' && stack.top()!='{')
                return false;
            else
                stack.pop();
        }
        if (stack.empty())
            return true;
        else
            return false;
    }
};

/*
///cout<<s.size();
        for(int i=0; i<s.size();i+=2){
            cout<<s[i]<<endl<<s[i+1];
            if(s[i]=='('){
                if(s[i+1]!=')')
                   return false;
            }else if(s[i]=='{'){
                if(s[i+1]!='}')
                   return false;
            }else if(s[i]=='['){
                if(s[i+1]!=']')
                   return false;
            }else
                return false;
        }
        return true;
    }
*/