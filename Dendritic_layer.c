//
//  Dendritic_layer.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include "Dendritic_layer.h"
#include "Setting.h"
#include "Synaptic_layer.h"
double *dendritioc(setting *my_setting,double **link_info){
    double *membrance=(double*)malloc(my_setting->m*sizeof(double));
    double seed=1.;
    for(int i=0;i<my_setting->m;i++){
        for(int j=0;j<my_setting->n;j++){
            membrance[i]=seed*link_info[j][i];
        }
    }
    return membrance;
}
