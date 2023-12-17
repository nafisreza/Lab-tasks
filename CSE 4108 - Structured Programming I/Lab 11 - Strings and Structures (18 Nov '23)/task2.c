/*
2. UNO Reverse:
Write a program named reverse.c that echoes its command-line arguments in
reverse order. Running the program by typing ⇒ reverse void and null should
produce the following output:
null and void.
Hint: You have to run the code from the command line. Pass the arguments &quot;void
and null&quot; after the name of the .exe file in the command line.
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }

    return 0;
}
