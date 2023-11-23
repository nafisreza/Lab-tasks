/*
Counting Digits:
Students of International University of Tokyo (IUT) are famous for counting things. Anything you ask them, from flag stands, fields, departments, lakes, even leaves of trees, they can immediately tell you their count. The difficulty of such an answer depends on how many digits are there in that count. The more the difficulty, the greater the reward. Alice, a freshman at IUT, wants to know the reward she’s going to get from answering questions. She knows the answers but she wants an automated system to find out the difficulty of each answer. Being her friend, the responsibility has fallen on your hands to help her.
Write a program that calculates how many digits a number contains.
Sample run:
Enter a number: 57
The number 57 has 2 digits
# You may assume that the number has no more than four digits.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    if(n<10){
        printf("1");
    }else if(n<100){
        printf("2");
    }else if(n<1000){
        printf("3");
    }else if(n<10000){
        printf("4");
    }

    return 0;
}
