#include <stdio.h>

int main(void)
{
    int price;
    float com;
    printf("Enter value of trade: \n");
    scanf("%d",&price);

    if(price<2500) com=30+(price*0.017);
    if(price>=2500 && price<6250) com=56+(price*0.0066);
    if(price>=6250 && price<20000) com=76+(price*0.0034);
    if(price>=20000 && price<50000) com=100+(price*0.0022);
    if(price>=50000 && price<500000) com=155+(price*0.0011);
    if(price>=500000) com=255+(price*0.0009);

    printf("Commission: %.2f",com);


    return 0;
}
