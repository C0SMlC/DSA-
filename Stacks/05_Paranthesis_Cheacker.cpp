#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

#include "ParanthesisCheackClass.cpp"

int main()
{
    string expression;
    cout << "Enter a Expression : " << endl;
    cin >> expression;
    int count = expression.length();
    // cout << count;
    Stack s;
    for (int i = 0; i < count; i++)
    {

        if (expression[i] == '{' or expression[i] == '[' or expression[i] == '(')
        {
            s.push(expression[i]);
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (expression[i] == '}' or expression[i] == ']' or expression[i] == ')')
        {
            switch (expression[i])
            {
            case '}':
                if (s.TopElement() == '{')
                {
                    s.pop();
                }
                break;
            case ')':
                if (s.TopElement() == ')')
                {
                    s.pop();
                }
                break;
            case ']':
                if (s.TopElement() == ']')
                {
                    s.pop();
                }
                break;
            default:
                break;
            }
        }
    }
    if (s.isEmpty())
    {
        cout << "Balanced" << endl;
    }

    return 0;
}