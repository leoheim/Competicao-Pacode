#include <stdio.h>


int main(void){

int M,N,T;
int NovoM;
scanf("%d %d %d", &M, &N, &T);

NovoM = ((M * N) + T) / (N + 1);

printf("%d", NovoM);


return 0;

}



