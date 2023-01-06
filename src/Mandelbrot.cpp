/*
 * Mandelbrot.cpp
 *
 *  Created on: 5 Jan 2023
 *      Author: felipepesantez
 */
#include <complex>
#include "Mandelbrot.h"

using namespace std;

namespace felipe{
    Mandelbrot::Mandelbrot(){


    }

    Mandelbrot::~Mandelbrot(){


    }

    int Mandelbrot::getIterations(double x, double y){

    	complex<double> z = 0;
    	complex<double> c(x,y);


    	int iterations = 0;

    	while(iterations < MAX_ITERATIONS){
    		z = z * z + c;

    		if(abs(z) > 2){
    			break;
    		}

    		iterations++;
    	}



        return iterations;

    }

}


