/*
    Purpose:    Exercise 2: Units & Conversions

    -> kms to miles
    -> inches to foot
    -> cms to inches
    -> pound to kgs
    -> inches to meters

*/

#include <stdio.h>
int main()
{
    int input;
    float kms_to_miles = 0.621371;
    float inches_to_foot = 0.0833333;
    float cms_to_inchees = 0.393701;
    float pound_to_kgs = 0.453592;
    float inches_to_meters = 0.0254;
    while (1)
    {
        printf("\n");
        printf("press '1' to calculate kms_to_miles;\n");
        printf("press '2' to calculate inches_to_foot;\n");
        printf("press '3' to calculate cms_to_inches; \n");
        printf("press '4' to calculate pound_to_kgs;\n");
        printf("press '5' to calculate inches_to_meters;\n");
        printf("press '0' to quit the programme;\n");

        printf("Enter a number: ");
        scanf("%d", &input);
        if (input == 0)
        {
            goto end;
        }
        float kms, inches, cms, pound;
        switch (input)
        {
        case 1:

            printf("Enter the value of Kilometers:\n");
            scanf("%f", &kms);
            printf("%0.3f kms = %0.3f miles\n", kms, (kms * kms_to_miles));
            break;
        case 2:

            printf("Enter the value of inches:\n");
            scanf("%f", &inches);
            printf("%0.3f inches = %0.3f foot\n", inches, (inches * inches_to_foot));
            break;
        case 3:

            printf("Enter the value of Centimetres: \n");
            scanf("%f", &cms);
            printf("%0.3f cms = %0.3f inches\n", cms, (cms * cms_to_inchees));
            break;
        case 4:

            printf("Enter the value of pound:\n");
            scanf("%f", &pound);
            printf("%0.3f pound = %0.3f kgs\n", pound, (pound * pound_to_kgs));
            break;
        case 5:

            printf("Enter the value of inches \n");
            scanf("%f", &inches);
            printf("%0.3f inches = %0.3f meters\n", inches, (inches * inches_to_meters));
            break;
        default:
            break;
        }
    }

end:
    return 0;
}