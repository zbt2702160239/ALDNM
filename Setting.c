//
//  Setting.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include "Setting.h"
#include <time.h>
setting *new_setting(double gamma,int n,int m){
    setting *my_setting=(setting*)malloc(sizeof(setting));
    my_setting->c=5;
    my_setting->c_soma=5;
    my_setting->gamma=gamma;//阈值
    my_setting->n=n;
    my_setting->m=m;
    return my_setting;
}
void free_setting(setting *setting){
    free(setting);
}
double my_random_fun(double low,double high){
    time_t t;
    srand((unsigned) time(&t));
    double x=(1.5-0)*(rand()/(double)RAND_MAX);
    double y=(0-1.5)*(rand()/(double)RAND_MAX);
    if(-y>x){
        return y;
    }else{
        return x;
    }
}
