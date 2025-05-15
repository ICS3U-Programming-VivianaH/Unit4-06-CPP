// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program creates a program that
// uses nested loops to print out all
// the valid RGB colors.
#include <iomanip>
#include <iostream>

int main() {
    // this function uses a nested loop
    int red;
    int green;
    int blue;

    // process & output
    for (red = 0; red <= 255; red += 15) {
        for (green = 0; green <= 255; green += 15) {
            for (blue = 0; blue <= 255; blue += 15) {
                std::cout << "\033[38;2;" << red << ";" << green << ";"
                          << blue << "mRGB(" << std::setw(3) << red << ", "
                          << std::setw(3) << green << ", " << std::setw(3)
                          << blue << ") \033[38;2;255;255;255m" << std::endl;
            }
        }
    }
}
