#include <iostream>
#include <stack>
using namespace std;

bool Balanced_Parenthesis(string &str)
{//T.C->O(n)  and Auxilary.Space:O(n).
    stack<char> s;
    bool sta_ = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        else
        {
            char temp = s.top();
            if (str[i] == ')')
            {
                if (temp == '(')
                {
                    s.pop();
                    sta_ = true;
                }
                else{
                    sta_ = false;
                    break;
                }
            }

            else if (str[i] == ']')
            {
                if (temp == '[')
                {
                    s.pop();
                    sta_ = true;
                }
                else{
                    sta_ = false;
                    break;
                }
            }

            else if (str[i] == '}')
            {

                if (temp == '{')
                {
                    s.pop();
                    sta_ = true;
                }
                else{
                    sta_ = false;
                    break;
                }
            }
        }
    }
    return sta_ && s.empty();
}
int main()
{

    string s = "{}([)";//<-output:The parentheses in the string are not balanced.
    string s = "";//<-output:The parentheses in the string are balanced.
    if (Balanced_Parenthesis(s))
    {
        cout << "The parentheses in the string are balanced." << endl;
    }
    else
    {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}


// <--------------------------------------------:More redable code:------------------------------------------>

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) {
                return false;
            } else if (c == ')' && st.top() != '(') {
                return false;
            } else if (c == ']' && st.top() != '[') {
                return false;
            } else if (c == '}' && st.top() != '{') {
                return false;
            } else {
                st.pop();
            }
        }
    }
    return st.empty();
}

int main() {
    string s="";
    if (isBalanced(s)) {
        cout << "The parentheses in the string are balanced." << endl;
    } else {
        cout << "The parentheses in the string are not balanced." << endl;
    }
    return 0;
}
