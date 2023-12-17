/*
3. Country Codes, Take Me Home!:
Write a program that asks the user to enter an international dialing code and then
looks it up in the country_codes array. If it finds the code, the program should display the name of the corresponding country; if not, the program should print a message saying invalid dialing code.
*/

#include <stdio.h>
#include <string.h>

struct Country {
    char name[20];
    int dialingCode;
};

int main() {
    struct Country countryCodes[] = {
        {"Bangladesh", 880},
        {"Argentina", 54},
        {"Brazil", 55},
        {"Burma", 95},
        {"China", 86},
        {"Columbia", 57}
    };

    int userCode;
    int found = 0;

    printf("Enter an international dialing code: ");
    scanf("%d", &userCode);

    for (int i = 0; i < sizeof(countryCodes) / sizeof(countryCodes[0]); i++) {
        if (userCode == countryCodes[i].dialingCode) {
            printf("Country: %s\n", countryCodes[i].name);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Invalid dialing code\n");
    }

    return 0;
}
