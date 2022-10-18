#include "data.h"
#include "global.h"
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>

namespace base{
using std::string;
using std::map;

map<string, person> map1;

void person_insert(struct person *p, int N) {
    clock_t start = clock();
    int i = 1;
    while (i <= MAX_LENGTH) {
        map1.insert(std::pair<string, person>(p->name, *p));
        p++;
        i++;
    }
    clock_t end = clock();
    float timeValue = end - start;
    printf("cost MillionTimes : %f\n", timeValue);
    char cFileName[300] = {0};
    sprintf(cFileName, "res.csv");
    std::ofstream out;
    out.open(cFileName, std::ios::out | std::ios::app);
    out<< "实验方案1" << "," << timeValue;
    out.close();
}

struct person *person_search(char *id) {

}

}