/*
 * Mandelbrot.h
 *
 *  Created on: 5 Jan 2023
 *      Author: felipepesantez
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace felipe{

class Mandelbrot{
    public:
    static const int MAX_ITERATIONS = 1000;

    public:
    Mandelbrot();
    virtual ~Mandelbrot();

    static int getIterations(double x, double y);

};



}




#endif /* MANDELBROT_H_ */
