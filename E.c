#include <stdio.h>


int main(void){

long n;
scanf("%ld", &n);
long soma1=0, soma2=0;
int maneiras=0;



long int arr[n];

for (int i = 0; i < n ; i++)
{
    scanf("%ld", &arr[i]);
}

for (int i = 0; i < n - 1 ; i++)
{
    soma1 += arr[i];
    soma2 = 0;

    for(int j= i + 1 ; j < n ; j++)
    {
        soma2 += arr[j];
    }
    if(soma1 == soma2)
    {
        maneiras++;
    }
}


printf("%d", maneiras);

return 0;

}



