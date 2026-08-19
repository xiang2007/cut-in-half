#include "../include/utils.hpp"
#include "../include/raylib.h"

#include <iostream>

const char* getFullImgPath(const std::string &img_name) {
    std::cout << ("img/" + img_name).c_str() << std::endl;
    return (("img/" + img_name).c_str());
}