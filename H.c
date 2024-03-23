#include <stdio.h>

int comparar(const void* a, const void* b)
{
    return(*(int*)a - *(int*)b);
}
int main(void){

int n;
scanf("%d", &n);

int arr[n];

for (int i = 0 ; i < n ; i++)
{
    scanf("%d", &arr[i]);

}


qsort(arr, n, sizeof(int), comparar);


int numero = arr[0];

if(numero != 1)
{
    while(numero != 1){
        numero--;
    }
} else if(numero == 1){
    for (int i = 0 ; i < n ; i++)
{
    if((arr[i] + 1) != arr[i + 1]){

        numero = (arr[i] + 1);
        break;
    }

}

}



printf("%d", numero);

return 0;

}



