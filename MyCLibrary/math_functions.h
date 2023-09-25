#if !defined MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#define pi 3.14159265
#define e 2.71828182

#include "common.h"
#include <math.h>

// calcola il fattoriale dell'intero x
extern int Fattoriale(const int x);

// calcola il coefficiente binomiale dei due interi n e k
extern double CoefficienteBinomiale(const int n, const int k);

// calcola il binomiale simmetrico
extern double BinomialeSimmetrico(const int n, const int h, const int k);

// calcola il prodotto scalare tra due vettori di dimensione v_size
extern double ProdottoScalareV(const double* v1, const double* v2, const size_t v1_size, const size_t v2_size);

// calcola il prodotto scalare tra uno scalare(k) e un vettore(v) di dimensione v_size (modifica i valori contenuti in v)
extern void ProdottoScalareS(double* v, const double k, const size_t v_size);

// calcola l'area del triangolo date base e altezza
extern double AreaTriangolo(const double base, const double altezza);

// calcola l'area del quadrato dato il lato
extern double AreaQuadrato(const double lato);

// calcola l'area del parallelogramma date base e altezza
extern double AreaParallelogramma(const double base, const double altezza);

// calcola l'area del rombo date le due diagonali
extern double AreaRombo(const double d1, const double d2);

// calcola l'area del trapezio date base minore (b1), base maggiore (b2) e altezza
extern double AreaTrapezio(const double b1, const double b2, const double altezza);

// calcola l'area della circonferenza dato il raggio
extern double AreaCfr(const double raggio);

// calcola l'area della corona circolare dato il raggio della circonferenza esterna e il raggio di quella interna
extern double AreaCoronaCir(const double rex, const double rin);

// calcola il volume di un solido rettangolare dati lato, profondità e altezza
extern double VolumeRettangolo(const double l, const double p, const double h);

// calcola il volume di un cubo dato il lato
extern double VolumeCubo(const double l);

// calcola il volume della piramide date base e altezza del triangolo alla base della piramide e l'altezza della stessa(h) 
extern double VolumePiramide(const double base, const double altezza, const double h);

#endif /* MATH_FUNCTIONS_H */