
#include <iostream>
#include <cmath>

/**
 * some people dislike this.
 */
//using namespace std;

/**
 * PI constant
 */
const double PI = 3.14159265;

void test() {
  std::cout << "test" << std::endl;
}

/**
 * Main function
 */
int main() {

  std::cout << "hi, advanced programmers!" << std::endl;

    double degrees = 125;
    double radians = degrees * 180 / PI;

    std::cout << cos(radians) << std::endl;
    return 0;
}

