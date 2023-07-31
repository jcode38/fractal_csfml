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


Complexe mandelbrot(Complexe *z, Complexe *c) {
    // ca marche pas encore 
    float reel;
    float image;
    Complexe *zz;

    zz->reel = pow(z->reel,2) - pow(z->imaginaire,2) + c->reel;
    zz->imaginaire = 2*z->reel*z->imaginaire + c->imaginaire;

    return *zz;
}
