#include <stdio.h>
int lcm(int a, int b);
int main()
{    int num1,num2,LCM;
     printf("Enter two numbers to find LCM: ");
     scanf("%d %d",&num1,&num2);
    if(num1>num2)
        LCM=lcm(num2, num1);
    else
        LCM=lcm(num1, num2);
    printf("LCM of %d and %d is = %d",num1,num2,LCM);
    return 0;
}
int lcm(int a, int b)
{  static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0))
    { return multiple; }
    else 
    { return lcm(a, b); }
}
