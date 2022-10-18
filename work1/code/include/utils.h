#ifndef __UTILS_H__
#define __UTILS_H__

#include "data.h"
#include <string>
#include <fstream>
#include <iostream>

namespace utils {
using base::person;

void load_data(struct person *pt, std::string filePath) {
    std::ifstream in(filePath, std::ios_base::in);
    if (!in) {
        std::cout<<"No such a file:"<<std::endl;
    }
    person s;
    int i = 0;
    while (in>>s.id>>s.name>>s.address>>s.phone_num) {
        pt[i] = s;
        ++i;
    }
    in.close();
    return;
}

}

#endif
