//
//  Setting.h
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#ifndef Setting_h
#define Setting_h

#include <stdio.h>
#include <stdlib.h>
#define RANDOM_UNIFORM() (rand()/(double)RAND_MAX)
typedef struct {
    double c;//常量参数
    double c_soma;//常量参数
    double gamma;//伽马阈值
    int n;//问题的输入个数
    int m;//树突个数
}setting;
setting *new_setting(double gamma,int n,int m);
void free_setting(setting *setting);
double my_random_fun(double low,double high);
#endif /* Setting_h */
