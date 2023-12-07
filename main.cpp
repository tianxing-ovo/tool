#include <iostream>
#include "service.h"

int main() {
    // exe注册为服务
    std::cout << "11.register exe as a service" << std::endl;
    std::cout << "12.delete a service" << std::endl;
    int i;
    while (true) {
        std::cout << "enter: ";
        std::cin >> i;
        if (i == 11) {
            createService();
        } else if (i == 12) {
            deleteService();
        } else {
            break;
        }
    }
    return 0;
}
