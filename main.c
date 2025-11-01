#include <stdio.h>

float num1, num2, result;
int choice;

float Addition(float, float);
float Subtraction(float, float);
float Multiplication(float, float);
float Division(float, float);
void getNumber();

int main()
{
    while (1) {
        printf("1-->Addition\n2-->Subtraction\n3-->Multiplication\n4-->Division\n5-->Exit\n");
        printf("Choose the operation you want to do: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        if (scanf("%d", &choice) != 1) {
            printf("\n");
            printf("Invalid input. Please enter a number between 1 and 5.\n");
            // clear the input buffer
            while (getchar() != '\n');
            continue; // skip to next loop iteration
        }

        

        switch(choice)
        {
            case 1:
                getNumber();
                result = Addition(num1, num2);
                printf("%.2f\n", result);
                break;
            case 2:
                getNumber();
                result = Subtraction(num1, num2);
                printf("%.2f\n", result);
                break;
            case 3:
                getNumber();
                result = Multiplication(num1, num2);
                printf("%.2f\n", result);
                break;
            case 4:
                getNumber();
                result = Division(num1, num2);
                printf("%.2f\n", result);
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }
    return 0;
}

float Addition(float fnum, float snum) { return fnum + snum; }

float Subtraction(float fnum, float snum) { return fnum - snum; }

float Multiplication(float fnum, float snum) { return fnum * snum; }

float Division(float fnum, float snum)
{
    if (snum == 0) {
        printf("Can't divide by 0\n");
        return 0.0f;
    }
    return fnum / snum;
}
void getNumber()
{
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input\n");

        while (getchar() != '\n'); // Clear input buffer
        return; // Or you could use a loop to ask again
    }

    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input\n");
        while (getchar() != '\n'); // Clear input buffer
        return; // Or loop to ask again
    }
}