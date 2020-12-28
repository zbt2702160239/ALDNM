//
//  Neuron.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include "Neuron.h"
#include "Setting.h"
#include "Synaptic_layer.h"
#include "Dendritic_layer.h"
#include "Membrane.h"
#include "Soma.h"
double neuron(setting *my_setting,double *input){
    double **link=synaptic(my_setting, input);
    double *dendritic_info=dendritioc(my_setting, link);
    double V=membrane(my_setting, dendritic_info);
    return soma(my_setting, V);
}
