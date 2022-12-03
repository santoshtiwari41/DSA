#include <iostream>
using namespace std;
class stack
{
private:
    int size, *arr, top;

public:
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int n)
    {
        if (top == size - 1)
        {
            cout << endl
                 << "stack overflow";
        }
        else
        {
            top++;
            arr[top] = n;
        }
    }

    char pop()
    {
        if (top == -1)
        {
            cout << endl
                 << "stack underflow";
        }
        else
        {
            top--;
            return arr[top];
        }
    }
    char peak()
    {
        return arr[top];
    }

    int priority(char x)
    {
        if (x == '^')
        {
            return 3;
        }
        else if (x == '*' || x == '/')
        {
            return 2;
        }
        else if (x == '-' || x == '+')
        {
            return 1;
        }
        else
            return 0;
    }
    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    stack s(10);
    string result, str;
    cout << endl
         << "enter your string : ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        else if (c == '(')
            s.push('(');

        else if (c == ')')
        {
            while (s.peak() != '(')
            {
                result += s.peak();
                s.pop();
            }
            s.pop();
        }

        else
        {
            while (!s.empty() && s.priority(str[i]) <= s.priority(s.peak()))
            {
                result += s.peak();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty())
    {
        result += s.peak();
        s.pop();
    }
    cout<<endl<<"postfix string is : ";
    cout << result << endl<<endl;
    return 0;
}