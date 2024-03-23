#include <stdio.h>

int main(void){

long n;
scanf("%ld", &n);

long numero = n;

if (n == 1){
    printf ("%ld", n);
}

while(n > 1){

if (n == numero){
printf("%ld ", n);
}

if(n % 2 == 0)
{
    n = n / 2;
    if(n != 1){
    printf("%ld ", n);
    } else
    {
        printf("%ld", n);
    }
}else{
    n = (n * 3) + 1;
    printf("%ld ", n);
}

}

return 0;

}



