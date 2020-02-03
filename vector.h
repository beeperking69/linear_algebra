#ifndef __LINEAR_ALGEBRA_VECTOR_H__
#define __LINEAR_ALGEBRA_VECTOR_H__

// ------------------------------------------------------------
// DOT PRODUCT
// ------------------------------------------------------------
float  dot_2f (float*  a, float*  b);
double dot_2d (double* a, double* b);

float  dot_3f (float*  a, float*  b);
double dot_3d (double* a, double* b);

float  dot_4f (float*  a, float*  b);
double dot_4d (double* a, double* b);

// ------------------------------------------------------------
// CROSS PRODUCT
// ------------------------------------------------------------
float  cross_2f (float*  a, float*  b);
double cross_2d (double* a, double* b);

float*  cross_3f (float*  lhv, float*  a, float  *b);
double* cross_3d (double* lhv, double* a, double *b);

// ------------------------------------------------------------
// MAGNITUDE
// ------------------------------------------------------------
float  magnitude_2f (float*  a);
double magnitude_2d (double* a);

float  magnitude_3f (float*  a);
double magnitude_3d (double* a);

float  magnitude_4f (float*  a);
double magnitude_4d (double* a);

// ------------------------------------------------------------
// MAGNITUDE SQUARED
// ------------------------------------------------------------
float  magnitude_squared_2f (float*  a);
double magnitude_squared_2d (double* a);

float  magnitude_squared_3f (float*  a);
double magnitude_squared_3d (double* a);

float  magnitude_squared_4f (float*  a);
double magnitude_squared_4d (double* a);

// ------------------------------------------------------------
// ADDITION
// ------------------------------------------------------------
float*  add_2f (float*  lhv, float*  delta);
double* add_2d (double* lhv, double* delta);

float*  add_3f (float*  lhv, float*  delta);
double* add_3d (double* lhv, double* delta);

float*  add_4f (float*  lhv, float*  delta);
double* add_4d (double* lhv, double* delta);

// ------------------------------------------------------------
// SUBTRACTION
// ------------------------------------------------------------
float*  subtract_2f (float*  lhv, float*  delta);
double* subtract_2d (double* lhv, double* delta);

float*  subtract_3f (float*  lhv, float*  delta);
double* subtract_3d (double* lhv, double* delta);

float*  subtract_4f (float*  lhv, float*  delta);
double* subtract_4d (double* lhv, double* delta);

#endif