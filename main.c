#include <stdio.h>
#include <stdlib.h>

unsigned long long fact (int n){

    unsigned long long result =1;

    if(n==0)
       return n+1;

    for(int i=1; i<=n; i++){

       result *= i;
    }

    return result;

}

int main()
{
    int numb=0;

    printf("which factorial do you want to know ?\n");
    scanf("%d", &numb);
    int result=fact(numb);
    printf("The result of the operation is %d\n", result);

}
