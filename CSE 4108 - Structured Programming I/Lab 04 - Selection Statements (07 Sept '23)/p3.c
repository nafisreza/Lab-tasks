/*
Broking Bad:
When stocks are sold or purchased through a broker, the broker’s commission often depends upon the value of the stocks traded.
Suppose that a broker charges the amounts shown in the following table:
.....check the lab module for details
*/

#include <stdio.h>

int main(void)
{
    int price,numberOfShare,pricePerShare;
    float com,total;
    printf("Enter number of shares: \n");
    scanf("%d",&numberOfShare);
    printf("Enter price per share: \n");
    scanf("%d",&pricePerShare);

    price = pricePerShare*numberOfShare;

    if(price<2500) com=30+(price*0.017);
    if(price>=2500 && price<6250) com=56+(price*0.0066);
    if(price>=6250 && price<20000) com=76+(price*0.0034);
    if(price>=20000 && price<50000) com=100+(price*0.0022);
    if(price>=50000 && price<500000) com=155+(price*0.0011);
    if(price>=500000) com=255+(price*0.0009);

    printf("Commission for original broker: $%.2f \n",com);

    if(numberOfShare<2000){
        total = 33+(price*0.03);
    }else{
        total = 33+(price*0.02);
    }

    printf("Commission for rival broker: $%.2f",total);


    return 0;
}
