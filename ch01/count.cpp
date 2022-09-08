/*
 * File: ch01
 * Data: 2022-06-11
 * Page: 10
 */

#include <iostream>

int main ()
{
    int currVal; // 统计正在统计的数字
    int val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                cnt++;
            }
            else
                std::cout << currVal << " occurs" << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
        }
        std::cout << currVal << " occurs" << cnt << " times" << std::endl;
    }
     return 0;
}