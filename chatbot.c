#include <stdio.h>
#include <string.h>

void respond(char *input) {
    if (strcmp(input, "Hello") == 0) {
        printf("Hi there!\n");
    } else if (strcmp(input, "How are you?") == 0) {
        printf("I'm just a program, so I don't have feelings, but thanks for asking!\n");
    } else if (strcmp(input, "What is your name?") == 0) {
        printf("My name is GitHub Copilot.\n");
    } else if (strcmp(input, "Goodbye") == 0) {
        printf("Goodbye! Have a great day!\n");
    } else {
        printf("I'm sorry, I don't understand that.\n");
    }
}

int main() {
    char input[100];

    printf("Welcome to the chatbot! Type 'Goodbye' to exit.\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove the newline character

        if (strcmp(input, "Goodbye") == 0) {
            respond(input);
            break;
        }

        respond(input);
    }

    return 0;
}