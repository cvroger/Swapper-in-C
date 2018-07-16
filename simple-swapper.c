#include <stdio.h>

void swapit(int *,int *); //remember to declare it first :)
int main(){
int src_a, src_b;
printf("Input First Number:");
scanf("%d", &src_a);
printf("\n");
printf("Input Second Number:");
scanf("%d", &src_b);
printf("\n");
printf("Now first number is %d and second number is %d\n", src_a, src_b);
swapit (&src_a, &src_b);
printf("\n\nFinally the first number is %d and second number is %d\n", src_a, src_b);
return 0;
}

// the function operates on the actual stored values in the addresses passed to it
void swapit (int *p, int *q){
    *p = *p * *q;
    *q = *p / *q;
    *p = *p / *q;
    printf("\nIn the function the first number is %d and the second number is %d", *p, *q);
}
