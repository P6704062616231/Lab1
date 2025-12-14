#include<stdio.h>
int main(){
    float item1,item2,item3;
    float cal,sum;
    scanf("%f",&item1);
    sum = item1;
    cal = sum - (sum * 0.05);
    printf("Total Price:%.2f\n",cal);

    scanf("%f",&item2);
    sum = item1 + item2;
    cal = sum - (sum * 0.15);
    printf("Total Price:%.2f\n",cal);

    scanf("%f",&item3);
    sum = item1 + item2 + item3;
    cal = sum - (sum * 0.30);
    printf("Total Price:%.2f\n",cal);
    return 0;
}
