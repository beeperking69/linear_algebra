#include "vector.h"

#include "math.h"

#define X(vec) (vec[0])
#define Y(vec) (vec[1])
#define Z(vec) (vec[2])
#define T(vec) (vec[3])

#define DOT_1(A,B) (X(A) * X(B))
#define DOT_2(A,B) (DOT_1(A,B) + Y(A) * Y(B))
#define DOT_3(A,B) (DOT_2(A,B) + Z(A) * Z(B))
#define DOT_4(A,B) (DOT_3(A,B) + T(A) * T(B))

#define CRS_1(A,B) (X(A) * Y(B))
#define CRS_2(A,B) (CRS_1(a,b) - CRS_1(b,a))

#define SQRT sqrt

// ------------------------------------------------------------
// ADDITION
// ------------------------------------------------------------
float* add_2f(float* lhv, float* delta)
{
    X(lhv) += X(delta);
    Y(lhv) += Y(delta);
    return lhv;
}

double* add_2d(double* lhv, double* delta)
{
    X(lhv) += X(delta);
    Y(lhv) += Y(delta);
    return lhv;
}

float* add_3f(float* lhv, float* delta)
{
    X(lhv) += X(delta);
    Y(lhv) += Y(delta);
    Z(lhv) += Z(delta);
    return lhv;
}

double* add_3d(double* lhv, double* delta)
{
    X(lhv) += X(delta);
    Y(lhv) += Y(delta);
    Z(lhv) += Z(delta);
    return lhv;
}

float* add_4f(float* lhv, float* delta)
{
    X(lhv) += X(delta);
    Y(lhv) += Y(delta);
    Z(lhv) += Z(delta);
    T(lhv) += T(delta);
    return lhv;
}

double* add_4d(double* lhv, double* delta)
{
    X(lhv) += X(delta);
    Y(lhv) += Y(delta);
    Z(lhv) += Z(delta);
    T(lhv) += T(delta);
    return lhv;
}

// ------------------------------------------------------------
// SUBTRACTION
// ------------------------------------------------------------
float* subtract_2f(float* lhv, float* delta)
{
    X(lhv) -= X(delta);
    Y(lhv) -= Y(delta);
    return lhv;
}

double* subtract_2d(double* lhv, double* delta)
{
    X(lhv) -= X(delta);
    Y(lhv) -= Y(delta);
    return lhv;
}

float* subtract_3f(float* lhv, float* delta)
{
    X(lhv) -= X(delta);
    Y(lhv) -= Y(delta);
    Z(lhv) -= Z(delta);
    return lhv;
}

double* subtract_3d(double* lhv, double* delta)
{
    X(lhv) -= X(delta);
    Y(lhv) -= Y(delta);
    Z(lhv) -= Z(delta);
    return lhv;
}

float* subtract_4f(float* lhv, float* delta)
{
    X(lhv) -= X(delta);
    Y(lhv) -= Y(delta);
    Z(lhv) -= Z(delta);
    T(lhv) -= T(delta);
    return lhv;
}

double* subtract_4d(double* lhv, double* delta)
{
    X(lhv) -= X(delta);
    Y(lhv) -= Y(delta);
    Z(lhv) -= Z(delta);
    T(lhv) -= T(delta);
    return lhv;
}

// ------------------------------------------------------------
// DOT PRODUCT
// ------------------------------------------------------------
float  dot_2f(float* a, float* b)
{
    return DOT_2(a, b);
}

double dot_2d(double* a, double* b)
{
    return DOT_2(a, b);
}

float dot_3f(float* a, float* b)
{
    return DOT_3(a, b);
}

double dot_3d(double* a, double* b)
{
    return DOT_3(a, b);
}

float dot_4f(float* a, float* b)
{
    return DOT_4(a, b);
}

double dot_4d(double* a, double* b)
{
    return DOT_4(a, b);
}

// ------------------------------------------------------------
// CROSS PRODUCT
// ------------------------------------------------------------
float  cross_2f(float* a, float* b)
{
    return CRS_2(a,b);
}

double cross_2d(double* a, double* b)
{
    return CRS_2(a,b);
}

float* cross_3f(float* lhv, float* a, float *b)
{
    X(lhv) = Y(a) * Z(b) - Y(b) * Z(a);
    Y(lhv) = Z(a) * X(b) - Z(b) * X(a);
    Z(lhv) = X(a) * Y(b) - Y(b) * X(a);
    return lhv;
}

double* cross_3d(double* lhv, double* a, double *b)
{
    X(lhv) = Y(a) * Z(b) - Y(b) * Z(a);
    Y(lhv) = Z(a) * X(b) - Z(b) * X(a);
    Z(lhv) = X(a) * Y(b) - Y(b) * X(a);
    return lhv;
}

// ------------------------------------------------------------
// MAGNITUDE
// ------------------------------------------------------------
float  magnitude_2f(float*  a)
{
    return SQRT(DOT_2(a,a));
}

double magnitude_2d(double* a)
{
    return SQRT(DOT_2(a,a));
}

float  magnitude_3f(float* a)
{
    return SQRT(DOT_3(a,a));
}

double magnitude_3d(double* a)
{
    return SQRT(DOT_3(a,a));
}

float  magnitude_4f(float*  a)
{
    return SQRT(DOT_4(a,a));
}

double magnitude_4d(double* a)
{
    return SQRT(DOT_4(a,a));
}

// ------------------------------------------------------------
// MAGNITUDE SQUARED
// ------------------------------------------------------------
float magnitude_squared_2f(float* a)
{
    return DOT_2(a,a);
}

double magnitude_squared_2d(double* a)
{
    return DOT_2(a,a);
}

float magnitude_squared_3f(float* a)
{
    return DOT_3(a,a);
}

double magnitude_squared_3d(double* a)
{
    return DOT_3(a,a);
}

float magnitude_squared_4f(float* a)
{
    return DOT_4(a,a);
}

double magnitude_squared_4d(double* a)
{
    return DOT_4(a,a);
}
