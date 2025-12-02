#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    contents[top++] = i;
}

char pop(void)
{
    return contents[--top];
}

int main()
{
    char ch;
    printf("Enter parenteses and/or braces: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == '(' || ch == '{')
            push(ch);
        else if (ch == ')')
            if (pop() != '(')
            {
                printf("Parenteses/braces are nested improperly");
                return 0;
            }
            else
            {
                ;
            }
        else if (ch == '}')
            if (pop() != '{')
            {
                printf("Parenteses/braces are nested improperly");
                return 0;
            }
    }
    printf("Parenteses/braces are nested properly");
    return 0;
}