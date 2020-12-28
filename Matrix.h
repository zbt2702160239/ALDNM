//
//  Matrix.h
//  ALDNM
//
//  Created by mac on 2020/12/28.
//

#ifndef Matrix_h
#define Matrix_h

#include <stdio.h>
#include "Setting.h"
double **init_matrix(setting *my_setting);
void free_matrix(double **matrix,setting *setting);
#endif /* Matrix_h */
