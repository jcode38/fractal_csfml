/*
** JMS PROJECT, 2022
** 
** File description:
** Projet fractal avec gestion fenetre
*/



#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <polynome.h>
#include <complexe.h>
#include <fractal.h>
#include <graph.h>

#define WIDTH 800
#define HEIGHT 600


int main() {
    
    /*sfRenderWindow* window;
    sfVideoMode mode = {WIDTH, HEIGHT, 32};
    sfVertexArray* vertex_array = sfVertexArray_create();
    Polynome *poly = malloc(sizeof(Polynome));
    Range *rge = malloc(sizeof(Range));
    Graph_ecran *ecran = malloc(sizeof(ecran));

    init_second(poly);
    input_data(poly);
    calcul_racine(poly);
    affiche_result(poly);

    init_range(rge);
    init_graph_ecran(ecran);
    window_trace_courbe(mode,vertex_array,poly,rge,ecran);
    window_trace_repere(vertex_array,rge,ecran);
    window_affiche(mode,window, vertex_array);

    destroy_second(poly);
    destroy_range(rge);
    destroy_Graph_ecran(ecran);
    */
    float m;
    Complexe *z = malloc(sizeof(Complexe));
    Complexe *zz = malloc(sizeof(Complexe));
    Complexe *c = malloc(sizeof(Complexe));
    c->reel = 0;
    c->imaginaire = 0;
    
    for (int x = 0;x<800;x++){


        for (int y=0;y<600;y++) {

            z->reel = 0;
            z->imaginaire = 0;

            for(int j=1;j<30;j++) {

                //*zz = mandelbrot(z,c);
                zz->reel = pow(z->reel,2) - pow(z->imaginaire,2) + c->reel;
                zz->imaginaire = 2*z->reel*z->imaginaire + c->imaginaire;
                z = zz;
            }

            m=  module(zz);

            if (m < 2) {
                printf("x = %d y = %d ",x,y);
                printf("c->reel = %f c->imaginaire = %f  Module = %f\n",c->reel,c->imaginaire,m);
            }
            
            c->imaginaire = c->imaginaire+0.1;
            //printf("x = %d y = %d\n",x,y);
        }
        c->reel = c->reel + 0.1;
        c->imaginaire = 0.1;
        
    }

    return 0;
}