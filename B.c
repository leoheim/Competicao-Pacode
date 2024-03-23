#include <stdio.h>


int main(void){

int raiz,n;
int contador=0;
scanf("%d %d",&raiz, &n);

int arr[n];

for(int i=0 ; i < n ; i++)
{
    scanf("%d", &arr[i]);
}

for(int i=0 ; i < n ; i++)
{
    contador += arr[i];
}

if(contador == raiz)
{
    printf("Tudo certo!");
}else{
    printf("Deu ruim!");
}




return 0;

}



