#include <iostream>
#include "createService.h"
int main() {
    // exe注册为服务
    std::cout << "1.register exe as a service" << std::endl;
    int i;
    while (true) {
        std::cout << "enter: ";
        std::cin >> i;
        if (i == 1) {
            createService();
        } else {
            break;
        }
    }
    return 0;
}
