#include <iostream>
#include "service.h"
#include "nginx.h"


int main() {
    std::cout << "11.register exe as a service" << std::endl;
    std::cout << "12.delete a service" << std::endl;
    std::cout << "13.close specific port service" << std::endl;
    std::cout << "21.nginx reload" << std::endl;
    std::cout << "22.nginx test" << std::endl;
    std::cout << "23.nginx stop" << std::endl;
    std::cout << "24.nginx start" << std::endl;
    int i;
    while (true) {
        std::cout << "enter: ";
        std::cin >> i;
        switch (i) {
            case 11:
                createService();
                break;
            case 12:
                deleteService();
                break;
            case 13:
                closePortService();
                break;
            case 21:
                reload();
                break;
            case 22:
                test();
                break;
            case 23:
                stop();
                break;
            case 24:
                start();
                break;
            default:
                return 0;
        }
    }
}
