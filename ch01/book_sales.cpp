/*
 * File: ch01
 * Data: 2022-06-11
 * Page: 21
 */

#include <iostream>
#include "Sales_item.h"

int main ()
{
    Sales_item total;

    if(std::cin >> total){
        Sales_item trans;

        while (std::cin >> total)
        {
           if (total.isbn() == trans.isbn())
           {
                total += trans;
           }else{
                std::cout << total << std::endl;
                total = trans;
           }
            
        }
        std::cout << total << std::endl;
        return 0; 
        
    }else{
        std::cout << "NO data" << std::endl;
        return 0;
    }

}
