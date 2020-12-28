//
//  main.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include <stdio.h>
#include "Setting.h"
#include "Neuron.h"
int main(int argc, const char * argv[]) {
    setting *setting=new_setting(0.5,15,15);
    double array[setting->n];
    array[0]=0.000596;
    array[1]=0.000104;
    array[2]=0.000200;
    array[3]=0.000787;
    array[4]=-0.000176;
    array[5]=0.000034;
    array[6]=0.000436;
    array[7]=-0.001125;
    array[8]=-0.001153;
    array[9]=-0.000063;
    array[10]=-0.000373;
    array[11]=0.000130;
    array[12]=-0.000027;
    array[13]=0.000184;
    array[14]=-0.000933;
    
    printf("neuron calc %lf",neuron(setting, array));
    return 0;
}
