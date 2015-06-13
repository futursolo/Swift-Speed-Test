//
//  main.cpp
//  C++ Prime Calculator
//
//  Created by Futur Solo on 2015/06/13.
//  Copyright (c) 2015年 Futur Solo. All rights reserved.
//

#include <iostream>
#include <math.h>

#define max_num 1000000

int main(int argc, const char * argv[]) {
    std::cout << "C++ Prime Number Calculator, max_num = " << max_num << "." << std::endl;
    clock_t start = clock();

    int num_list[max_num];
    int max_value;

    for(int i = 0; i < max_value; i++){
        num_list[i] = 1;
    }
    for(int i = 2; i < sqrt(max_value); i++){
        if(num_list[i]){
            int current = i * 2;
            while (current < max_value) {
                num_list[current] = 0;
                current = current + i;
            }
        }
    }
    for(int i = 2; i < max_value; i++){
        if(num_list[i]){
            max_value = i;
        }
    }

    clock_t end = clock();
    std::cout << "Finished! Max Value is " << max_value << ", Used Time: "
    << (double)(end - start) / CLOCKS_PER_SEC << "s." << std::endl;
    return 0;
}