/*
 * File: ch01
 * Data: 2022-06-11
 * Page: 10
 */

#include <iostream>

int main ()
{
    int sum = 0, val = 1;
    while (val <= 1)
    {
        sum += val;
        val++;
    }
    std::cout << "sum = "<< sum << std::endl;
    return 0;
}