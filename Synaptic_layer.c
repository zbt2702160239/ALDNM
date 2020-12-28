//
//  Synaptic_layer.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include "Synaptic_layer.h"
#include <math.h>
#include <time.h>
#include "Setting.h"
#include "Matrix.h"
double **synaptic(setting *my_setting,double *input){
    
    double **link=init_matrix(my_setting);
    for(int i=0;i<my_setting->n;i++){
        for(int j=0;j<my_setting->m;j++){
            link[i][j]=1 / (1 + exp(-my_setting->c*(my_random_fun(-1.5, 1.5)*input[i]-my_random_fun(-1.5, 1.5))));
        }
    }
    return link;
}
