/*
 * File: ch01/for,cpp
 * Data: 2022-06-11
 * Page: 11
 */

#include <iostream>

int main()
{
    int sum = 0;
    int count = 0;
    std::cin >> count;
    for (int i = 0; i <= count; i++)
    {
        sum += i;
    }
    std::cout <<"sum = "<< sum << std::endl;
    return 0;
}