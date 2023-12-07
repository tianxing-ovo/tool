#include <string>
#include <iostream>
#include "createService.h"

void createService() {
    std::string serviceName;
    std::string path;
    std::string command = "sc create ";
    std::cout << "enter the service name: ";
    std::cin >> serviceName;
    std::cout << "enter the exe file path: ";
    std::cin >> path;
    command.append(serviceName).append(" binPath= \"").append(path).append("\"");
    system(command.c_str());
}