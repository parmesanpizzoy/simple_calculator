#include <stdio.h>

int readNumber(const char* prompt) {
    int num;
    printf("%s", prompt);
    scanf("%d", &num);
    return num;
}

int add() {
    int x = readNumber("First number: ");
    int y = readNumber("Second number: ");
    return x + y;
}

int subtract() {
    int x = readNumber("First number: ");
    int y = readNumber("Second number: ");
    return x - y;
}

int multiply() {
    int x = readNumber("First number: ");
    int y = readNumber("Second number: ");
    return x * y;
}

float divide() {
    int x = readNumber("First number: ");
    int y = readNumber("Second number: ");
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float) x / y;
}

int main() {
    int choice;
    do {
        printf("Which calculation do you want to do?\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf(">> ");
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Result: %d\n", add());
                break;
            case 2:
                printf("Result: %d\n", subtract());
                break;
            case 3:
                printf("Result: %d\n", multiply());
                break;
            case 4:
                printf("Result: %.2f\n", divide());
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
        if (choice != 5) {
            printf("Press Enter to continue...\n");
            getchar();
            getchar();
        }
        
    } while (choice != 5);
    
    return 0;
}
