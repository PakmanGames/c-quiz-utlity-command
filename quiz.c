#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        // yeah do stuff
        if (strcmp(argv[1], "-1") == 0) {
            // do more stuff
            if(argc == 3) {
                // answer to question
            } else {
                // only 1 answer to q please
            }
        } else if (strcmp(argv[1], "-2") == 0) {
            // even more stuff
            if (argc == 3) {
                // answer to q
            } else {
                // only 1 answe to q please
            }
        } else if (strcmp(argv[1], "--help") == 0) {
            // do help stuff show help
        } else {
            // oh not try --help function
        }
    } else {
        // oh not try --help function
        printf("try --help\n");
    }
    return EXIT_SUCCESS;
}