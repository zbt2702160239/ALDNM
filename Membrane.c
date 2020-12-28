//
//  Membrane.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include "Membrane.h"
#include "Setting.h"
double membrane(setting *my_setting,double *dendritic_info){
    double V=0.;
    for(int i=0;i<my_setting->m;i++){
        V+=dendritic_info[i];
    }
    return V;
}
