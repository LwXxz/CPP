#include <iostream>
#include "lab2_fac.hpp"

int Factorials(int nums){
    int res;
    if (nums >= 1){
        res = Factorials(nums-1) * nums;
        std::cout << nums << "!" << " = " << res << std::endl;
        return res;
    }else if (nums == 0)
    {
        return 1;
    }
}
