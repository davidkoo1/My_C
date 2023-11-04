#include <bits/stdc++.h>
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

const int LIM = 100;

bool isEmpty(int k)
{
    return k == 0 ? true : false;
}

void push(int stiva[], int &k, int numar)
{
    k++;
    stiva[k] = numar;
}

void push_c(char stiva[], int &k2, char opert)
{
    k2++;
    stiva[k2] = opert;
}

int peek(int stiva[], int k)
{
    return stiva[k];
}

char peek(char stiva[], int k2)
{
    return stiva[k2];
}

int pop(int stiva[], int &k)
{
    int res = peek(stiva, k);
    k--;
    return res;
}

char pop(char stiva[], int &k2)
{
    char res = peek(stiva, k2);
    k2--;
    return res;
}

int calculate(char expression[])
{
    int stivaNumbers[LIM], kNum = 0;
    char stivaOperations[LIM];
    int kOper = 0;

    int i = 0;
    while (expression[i] != '\0')
    {
        if (isdigit(expression[i]))
        {
            int num = 0;
            while (isdigit(expression[i]))
            {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            push(stivaNumbers, kNum, num);
        }
        else if (expression[i] == '(')
        {
            push_c(stivaOperations, kOper, expression[i]);
            i++;
        }
        else if (expression[i] == ')')
        {
            while (!isEmpty(kOper) && peek(stivaOperations, kOper) != '(')
            {
                int op2 = pop(stivaNumbers, kNum);
                int op1 = pop(stivaNumbers, kNum);
                char oper = pop(stivaOperations, kOper);

                if (oper == '+')
                    push(stivaNumbers, kNum, op1 + op2);
                else if (oper == '-')
                    push(stivaNumbers, kNum, op1 - op2);
                else if (oper == '*')
                    push(stivaNumbers, kNum, op1 * op2);
                else if (oper == '/')
                    push(stivaNumbers, kNum, op1 / op2);
            }
            pop(stivaOperations, kOper); // Pop '('
            i++;
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            while (!isEmpty(kOper) && peek(stivaOperations, kOper) != '(')
            {
                int op2 = pop(stivaNumbers, kNum);
                int op1 = pop(stivaNumbers, kNum);
                char oper = pop(stivaOperations, kOper);

                if (oper == '+')
                    push(stivaNumbers, kNum, op1 + op2);
                else if (oper == '-')
                    push(stivaNumbers, kNum, op1 - op2);
                else if (oper == '*')
                    push(stivaNumbers, kNum, op1 * op2);
                else if (oper == '/')
                    push(stivaNumbers, kNum, op1 / op2);
            }
            push_c(stivaOperations, kOper, expression[i]);
            i++;
        }
        else
        {
            i++;
        }
    }

    while (!isEmpty(kOper))
    {
        int op2 = pop(stivaNumbers, kNum);
        int op1 = pop(stivaNumbers, kNum);
        char oper = pop(stivaOperations, kOper);


        if (oper == '+')
            push(stivaNumbers, kNum, op1 + op2);
        else if (oper == '-')
            push(stivaNumbers, kNum, op1 - op2);
        else if (oper == '*')
            push(stivaNumbers, kNum, op1 * op2);
        else if (oper == '/')
            push(stivaNumbers, kNum, op1 / op2);
    }

    return peek(stivaNumbers, kNum);
}

int main()
{
    char expression[] = "2+3*2";
    int result = calculate(expression);
    printf("Result: %d\n", result);

    return 0;
}
