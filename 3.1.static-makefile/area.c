#include <math.h>
#include "area.h"

double area_square(double a) {
   return a * a;
}

double area_rectangle(double a, double b) {
   return a * b;
}

double area_triangle(double a, double b, double c) {
   const double p = (a + b + c) / 2;
   return sqrt(p * (p - a) * (p - b) * (p - c));
}

double area_circle(double r) {
   const double PI = 3.14159265;
   return PI * r * r;
}
