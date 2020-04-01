#ifndef ALGORITHMIC_LANGUAGES_2_LAB_1_ISOBARIC_PROCESS_H
#define ALGORITHMIC_LANGUAGES_2_LAB_1_ISOBARIC_PROCESS_H


#include "thermodynamic_process.h"

class IsohoricProcess : public ThermodynamicProcess {
protected:
    long double const v_, deltaP_;

public:
    IsohoricProcess(double nu, double v, double deltaP);

    long double getDeltaP() const override;

    long double getDeltaV() const override;

    long double getDeltaT() const override;

    long double getA() const override;
};


#endif//ALGORITHMIC_LANGUAGES_2_LAB_1_ISOBARIC_PROCESS_H
