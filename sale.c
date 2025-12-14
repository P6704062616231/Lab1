#include<stdio.h>
int main(){
    float item1,item2,item3;
    float cal,sum;
    float vat = 1.07;

    scanf("%f",&item1);
    sum = item1;
    cal = sum - (sum * 0.05);
    printf("Total Price:%.2f\n",cal*vat);

    scanf("%f",&item2);
    sum = item1 + item2;
    cal = sum - (sum * 0.15);
    printf("Total Price:%.2f\n",cal*vat);

    scanf("%f",&item3);
    sum = item1 + item2 + item3;
    cal = sum - (sum * 0.30);
    printf("Total Price:%.2f\n",cal*vat);
    return 0;
}
