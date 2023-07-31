/*
** JMS PROJECT, 2022
** 
** File description:
** Projet Fractal
*/

#include <stdio.h>
#include <stdlib.h>
#include <complexe.h>
#include <math.h>

float module(Complexe *i) {
    //
    float module;
    module = sqrt(pow(i->reel,2) + pow(i->imaginaire,2));
    
    return module;
}
