#include <stdio.h>

int getvalue(char c)
{
    switch (c) {
        case '0':
            break;
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'M':
            return 1000;
            break; 
        default:
            printf ("Unknown numeral\n");
            break;
    }
    return 0;
}

int romantoint (const char *a)
{
    int i =1;
    int total = getvalue(a[0]);
    while (a[i] != 0){
        if(getvalue(a[i-1]) < getvalue(a[i]))
        total = total + getvalue(a[i]) - 2*getvalue(a[i-1]);
        else
        total = total + getvalue(a[i]);
    ++i;
    }
    return total;
}

int main()
{
    char roman[42];
    
    printf("enter a string of roman numerals in caps\n");
    scanf("%s", roman);
    
    int q = romantoint(roman);
    
    if (q == 0)
    printf("the value is 0");
    else
    printf("the value is %d", q);
    
    return 0;
}



