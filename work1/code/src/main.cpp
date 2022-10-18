#include "data.h"
#include "global.h"
#include "utils.h"
#include <iostream>

int base::MAX_LENGTH = 100000;

int main(int argc, char *argv[]) {    
    struct base::person *pt = new base::person[base::MAX_LENGTH];
    utils::load_data(pt, "person.txt");
    person_insert(pt, base::MAX_LENGTH);
}