#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
class Stack
{
public:
    int top;
    unsigned capacity;
    int *array;
};
Stack *createStack(unsigned capacity)
{
    Stack *stack = new Stack();
    if (!stack)
        return NULL;
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = new int[(stack->capacity * sizeof(int))];
    if (!stack->array)
        return NULL;
    return stack;
}
int isEmpty(Stack *);
int peek(Stack *);
int pop(Stack *);
void push(Stack *, int);
void DS(stack<char>);
void InfixToPostfix(string s)
{
    stack<char> st;
    string result;
    cout << "Sr.No.\tChar\tStack\tExpression\n";
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            result += c;
        }
        else if (c == '(')
            st.push('(');
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.push(c);
        }
        cout << i << "\t" << c << "\t";
        DS(st);
        cout << "\t" << result << endl;
    }
    while (!st.empty())
    {
        char temp = st.top();
        st.pop();
        result += temp;
    }
}
int evaluatePostfix(char *exp)
{
    Stack *stk = createStack(strlen(exp));
    int i;
    if (!stk)
        return -1;
    for (i = 0; exp[i]; ++i)
    {
        if (exp[i] == ' ')
            continue;
        else if (isdigit(exp[i]))
        {
            int num = 0;
            while (isdigit(exp[i]))
            {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;
            push(stk, num);
        }
        else
        {
            int val1 = pop(stk);
            int val2 = pop(stk);
            switch (exp[i])
            {
            case '+':
                push(stk, val2 + val1);
                break;
            case '-':
                push(stk, val2 - val1);
                break;
            case '*':
                push(stk, val2 * val1);
                break;
            case '/':
                push(stk, val2 / val1);
                break;
            }
        }
    }
    return pop(stk);
}
int main()
{
    cout << "Given infix expression:\n";
    string str = "(A*B-(C-D))/(E+F)\n";
    cout << str;
    cout << "Postfix Conversion:\n\n";
    InfixToPostfix(str);
    char exp[] = "54 6 + 7 4 - * 9 / 35 15 + +\n";
    cout << "Given postfix expression:\n";
    string temp = exp;
    cout << temp;
    cout << "Value of postfix expression: ";
    cout << evaluatePostfix(exp);
    return 0;
}
int isEmpty(Stack *stack) { return stack->top == -1; }
int peek(Stack *stack) { return stack->array[stack->top]; }
int pop(Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}
void push(Stack *stack, int op) { stack->array[++stack->top] = op; }
void DS(stack<char> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
