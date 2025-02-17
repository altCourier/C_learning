#include <stdio.h>

int main()
{
    char response;
    double x;    

    printf("Welcome to the Unit Converter!\n");
    printf("Choose a category:\n");
    printf("1. Length\n2. Weight\n3. Temperature\n4. Exit\n");

    scanf(" %c", &response);

    if (response == '1')
    {
        printf("You have chosen Length.\n");
        printf("Choose a conversion:\n");
        printf("1. Meters to Kilometers\n2. Feet to Inches\n3. Miles to Kilometers\n4. Centimeters to Inches\n");
        scanf(" %c", &response);
        
        if (response == '1')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf meters is %.2lf kilometers.\n", x, x / 1000);
        }
        else if (response == '2')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf feet is %.2lf inches.\n", x, x * 12);
        }
        else if (response == '3')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf miles is %.2lf kilometers.\n", x, x * 1.60934);
        }
        else if (response == '4')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf centimeters is %.2lf inches.\n", x, x * 0.393701);
        }
        else 
        {
            printf("Unexpected input... Terminating...\n");
            return 0;
        }
    }
    else if (response == '2')
    {
        printf("You have chosen Weight.\n");
        printf("Choose a conversion:\n");
        printf("1. Kilograms to Pounds\n2. Pounds to Ounces\n3. Grams to Kilograms\n4. Stones to Kilograms\n");
        scanf(" %c", &response);
        
        if (response == '1')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf kilograms is %.2lf pounds.\n", x, x * 2.20462);
        }
        else if (response == '2')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf pounds is %.2lf ounces.\n", x, x * 16);
        }
        else if (response == '3')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf grams is %.2lf kilograms.\n", x, x / 1000);
        }
        else if (response == '4')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf stones is %.2lf kilograms.\n", x, x * 6.35029);
        }
        else 
        {
            printf("Unexpected input... Terminating...\n");
            return 0;
        }
    }
    else if (response == '3')
    {
        printf("You have chosen Temperature.\n");
        printf("Choose a conversion:\n");
        printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n4. Kelvin to Celsius\n");
        scanf(" %c", &response);
        
        if (response == '1')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf Celsius is %.2lf Fahrenheit.\n", x, (x * 9 / 5) + 32);
        }
        else if (response == '2')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf Fahrenheit is %.2lf Celsius.\n", x, (x - 32) * 5 / 9);
        }
        else if (response == '3')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf Celsius is %.2lf Kelvin.\n", x, x + 273.15);
        }
        else if (response == '4')
        {
            printf("Enter your value:\n");
            scanf("%lf", &x);
            printf("%.2lf Kelvin is %.2lf Celsius.\n", x, x - 273.15);
        }
        else 
        {
            printf("Unexpected input... Terminating...\n");
            return 0;
        }
    }
    else if (response == '4')
    {
        printf("Goodbye.\n");
    }
    else 
    {
        printf("Invalid input. Terminating...\n");
        return 0;
    }

    return 0;
}
