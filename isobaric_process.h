#ifndef ALGORITHMIC_LANGUAGES_2_LAB_1_ISOBARIC_PROCESS_H
#define ALGORITHMIC_LANGUAGES_2_LAB_1_ISOBARIC_PROCESS_H


#include "thermodynamic_process.h"

class IsobaricProcess : public ThermodynamicProcess {
protected:
    long double const p_, deltaV_;

public:
    IsobaricProcess(double nu, double p, double deltaV);

    long double getDeltaP() const override;

    long double getDeltaV() const override;

    long double getDeltaT() const override;

    long double getA() const override;
};


#endif//ALGORITHMIC_LANGUAGES_2_LAB_1_ISOBARIC_PROCESS_H
