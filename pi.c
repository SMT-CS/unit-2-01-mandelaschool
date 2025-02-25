// Copyright (c) 2020 Mr. Coxall All rights reserved
//
// Created by: Mandela Logan
// Created on: February 2025
// This program calculates the area of a circle
//    with radius 15mm

#include <stdio.h>
#include <math.h>

int main()
{
    int radius, circumference; // Declaring variables to store two numbers and their product

    // Asking the user to input two numbers
    printf("Enter radius: ");
    scanf("%d", &radius);

    // Calculating the product of two numbers
    circumference = radius * M_PI * 2;

    // Printing the result
    printf("Circumference: %d", circumference);
    printf("\n");

    return 0; // Indicating that the program ended successfully
}