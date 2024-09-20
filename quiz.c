/**
 * Andy Pak, 400530925, 10-3-2024
 * 
 * This program is a linux utility command 'quiz', it give quiz questions and provides feedback based on user's answers.
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * This is the main function for the program.
 * 
 * It takes two parameters:
 * int argc, the number of arguments entered.
 * char *argv[], a list of the arguments entered.
 */
int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (strcmp(argv[1], "-1") == 0) {
            // -1 flag, for question 1
            if(argc == 3) {
                // User tries to answer
                if (strcmp(argv[2], "No") == 0 || strcmp(argv[2], "no") == 0) {
                    // Print response when answer is correct
                    printf("That is correct! Did you show your work with a truth table though?\n");
                } else {
                    // Print hint when its incorrect
                    printf("That is incorrect, a tautology is an expression that always evaluates to true.\n");
                    printf("Please try again, maybe use a truth table to determine the answer.\n");
                }
            } else {
                // Show question 1
                printf("Is the boolean expression ~(p = ~q) a tautology?\n");
            }
            return EXIT_SUCCESS;
        } else if (strcmp(argv[1], "-2") == 0) {
            // -2 flag, for question 2
            if (argc == 3) {
                // User tries to answer
                if (strcmp(argv[2], "Yes") == 0 || strcmp(argv[2], "No") == 0 || strcmp(argv[2], "yes") == 0 || strcmp(argv[2], "no") == 0) {
                    // Print response when answer is correct
                    printf("That is correct! That question is a proposition.\n");
                    printf("The sky can be blue or not blue but not both at the same time.\n");
                    printf("Therefore the answer can be both 'Yes' or 'No'.\n");
                } else {
                    // Print hint when its incorrect
                    printf("That is incorrect, perhaps it can be 'Yes' or 'No'?\n");
                }
            } else {
                // Show question 2
                printf("Is the sky blue?\n");
            }
            return EXIT_SUCCESS;
        } else if (strcmp(argv[1], "-3") == 0) {
            // -3 flag, for question 3
            if (argc == 3) {
                // User tries to answer
                if (strcmp(argv[2], "3") == 0) {
                    // Print response when answer is correct
                    printf("That is correct, make sure you double check your assignment before you submit.\n");
                } else {
                    // Print hunt when its incorrect
                    printf("No silly, did you even read the assignment doc?\n");
                }
            } else {
                printf("How many questions does this quiz have?\n");
            }
        } else if (strcmp(argv[1], "--help") == 0) {
            // Link to help resource when user uses --help flag
            printf("Refer to the README found at https://github.com/Sam-Scott-McMaster/the-ci-pipeline-assignment-PakmanGames\n");
            return EXIT_SUCCESS;
        } else {
            // Response for invalid flag
            printf("Usage: quiz [-#] [<answer>]\n");
            printf("Try 'quiz --help' for more information.\n");
            return EXIT_FAILURE;
        }
    } else {
        // Response when no flags entered
        printf("Usage: quiz [-#] [<answer>]\n");
        printf("Try 'quiz --help' for more information.\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}