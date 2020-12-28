//
//  Matrix.c
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#include "Matrix.h"
#include "Setting.h"
double **init_matrix(setting *my_setting){//矩阵构造
    double **matrix=(double **)malloc(my_setting->n*sizeof(double*));
    for(int i=0;i<my_setting->n;i++){
        matrix[i]=(double*)malloc(my_setting->m*sizeof(double));
    }
    return matrix;
}

void free_matrix(double **matrix,setting *setting){//矩阵释放
    for(int i=0;i<setting->n;i++){
        free(matrix[i]);
    }
    free(matrix);
}
