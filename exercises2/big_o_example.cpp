#include <iostream>
#include <random>
#include <vector>

#include <algorithm>
#include <functional>
#include <iterator>

#include <sstream>

int main(int argc, char const *argv[])
{


    int n = atoi(argv[1]);
    //int m = atoi(argv[2]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            std::cout << i << std::endl;
            std::cout << j << std::endl;
        }
    }

    for(int i = 0; i < n; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}

