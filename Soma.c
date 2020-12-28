//
//  Soma.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//
#include <math.h>
#include "Soma.h"
#include "Setting.h"

double soma(setting *my_setting,double V){
    double output;
    output=1 / (1 + exp(-my_setting->c_soma*(V-my_setting->gamma)));
    return output;
}
