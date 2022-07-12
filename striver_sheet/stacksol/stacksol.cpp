bool isValid(string s) {
        stack<char> stk;
        for(auto ch: s)
            {
                if(stk.empty()){
                   if(ch == '}' || ch == ')' || ch == ']') return (false);
                   stk.push(ch);
                }
                else{
                    if(ch == ')'){
                       if(stk.top() != '(') return (false);
                       stk.pop();
                    }
                    else if(ch == ']'){
                        if(stk.top() != '[') return (false);
                       stk.pop();
                    }
                    else if(ch == '}'){
                       if(stk.top() != '{') return (false);
                       stk.pop();
                   }
                   else stk.push(ch);
               }
            }
        return stk.empty();
    }