#include <stdio.h>

// Function prototype
float area_of_circle(float radius);

int main() {
    float radius;
    
    // Function pointer declaration
    float (*func_ptr)(float);

    // Assign the function address to the pointer
    func_ptr = area_of_circle;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calling the function using function pointer
    float area = func_ptr(radius);

    // Display the result
    printf("Area of the circle: %.2f\n", area);

    return 0;
}

// Function to calculate the area of a circle
float area_of_circle(float radius) {
    return 3.14159 * radius * radius; // Using π ≈ 3.14159
}