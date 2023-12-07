#include <string>
#include <iostream>
#include "service.h"
/**
 * 注册服务
 */
void createService() {
    std::string serviceName;
    std::string path;
    std::string command = "sc create ";
    // 例如: nginx
    std::cout << "enter the service name: ";
    std::cin >> serviceName;
    // 例如: D:\tools\nginx-1.24.0\nginx.exe
    std::cout << "enter the exe file path: ";
    std::cin >> path;
    command.append(serviceName).append(" binPath= \"").append(path).append("\"");
    system(command.c_str());
}

/**
 * 删除服务
 */
void deleteService() {
    std::string serviceName;
    std::string command = "sc delete ";
    // 例如: nginx
    std::cout << "enter the service name: ";
    std::cin >> serviceName;
    command.append(serviceName);
    system(command.c_str());
}