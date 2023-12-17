/*
2. High Frequency!:
Frequency of a character in a C character array or a string refers to the number of times a character or a letter is present in a string. Write a function to find out the frequency of the characters in a character array or string. The character array consists of lowercase letters.

Sample Input:
aezakmi
Sample Output:
a=2
e=1
i=1
k=1
m=1
z=1
*/
#include <stdio.h>

void frequencyChecker(char str[100]){
    int count = 0;
    char c;

    for(c='a';c<='z';c++){
        int count = 0;

        for(int i=0; str[i]!='\0'; i++){

            if (c==str[i]) count++;
        }
        if(count) printf("%c = %d \n",c,count);
    }
}

int main(){
    frequencyChecker("shahriarivan");
}
