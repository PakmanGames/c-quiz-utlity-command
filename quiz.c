#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "-1") == 0) {
            if(argc == 3) {
                if (strcmp(argv[2], "No") == 0 || strcmp(argv[2], "no") == 0) {
                    printf("That is correct! Did you show your work with a truth table though?\n");
                } else {
                    printf("That is incorrect, a tautology is an expression that always evaluates to true.\n");
                    printf("Please try again, maybe use a truth table to determine the answer.\n");
                }
            } else {
                printf("Is the boolean expression ~(p = ~q) a tautology?\n");
            }
            return EXIT_SUCCESS;
        } else if (strcmp(argv[1], "-2") == 0) {
            if (argc == 3) {
                if (strcmp(argv[2], "Yes") == 0 || strcmp(argv[2], "No") == 0 || strcmp(argv[2], "yes") == 0 || strcmp(argv[2], "no") == 0) {
                    printf("That is correct! That question is a proposition.\n");
                    printf("The sky can be blue or not blue but not both at the same time.\n");
                    printf("Therefore the answer can be both 'Yes' or 'No'.\n");
                } else {
                    printf("That is incorrect, perhaps it can be 'Yes' or 'No'?\n");
                }
            } else {
                printf("Is the sky blue?\n");
            }
            return EXIT_SUCCESS;
        } else if (strcmp(argv[1], "--help") == 0) {
            printf("Linux-style help (try 'cat --help' or similar for examples)\n");
            return EXIT_SUCCESS;
        } else {
            printf("Usage: quiz [-#] [<answer>]\n");
            printf("Try 'quiz --help' for more information.\n");
            return EXIT_FAILURE;
        }
    } else {
        printf("Usage: quiz [-#] [<answer>]\n");
        printf("Try 'quiz --help' for more information.\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}