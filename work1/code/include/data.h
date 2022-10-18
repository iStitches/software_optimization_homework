#ifndef __STRUCT_H__
#define __STRUCT_H__

#include <string>
#include <map>

namespace base{

struct person { 
    char id[18];        //身份证号码
    char name[20];      //姓名
    char address[60];   //住址
    char phone_num[14]; //电话
    person(){}
};

extern void person_insert(struct person *p, int N);

extern struct person *person_search(char *id);

}

#endif
