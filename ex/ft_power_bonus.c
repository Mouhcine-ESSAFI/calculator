#include"lib.h"

double ft_power(double a,double b){
    double p=1;
    for (int i = 0; i < b; i++){
        p = p * a;
    }
    return p;
}
