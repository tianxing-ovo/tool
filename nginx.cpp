#include <iostream>
#include "nginx.h"

// 工作目录
std::string prefix = "-p D:/tools/nginx-1.18.0";


void reload() {
    std::string command = "nginx -s reload ";
    command.append(prefix);
    system(command.c_str());
}

void test() {
    std::string command = "nginx -t ";
    command.append(prefix);
    system(command.c_str());
}

void start(){
    std::string command = "start nginx ";
    command.append(prefix);
    system(command.c_str());
}

void stop() {
    std::string command = "nginx -s stop ";
    command.append(prefix);
    system(command.c_str());
}
