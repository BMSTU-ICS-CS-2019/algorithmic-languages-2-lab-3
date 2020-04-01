#ifndef ALGORITHMIC_LANGUAGES_2_LAB_3_ISOHORIC_PROCESS_H
#define ALGORITHMIC_LANGUAGES_2_LAB_3_ISOHORIC_PROCESS_H


#include "thermodynamic_process.h"

class IsohoricProcess : public ThermodynamicProcess {
protected:
    long double const v_, deltaP_;

public:
    IsohoricProcess(double nu, double v, double deltaP);

    [[nodiscard]] long double getDeltaP() const override;

    [[nodiscard]] long double getDeltaV() const override;

    [[nodiscard]] long double getDeltaT() const override;

    [[nodiscard]] long double getA() const override;

    [[nodiscard]] std::string toString() const override;
};


#endif // ALGORITHMIC_LANGUAGES_2_LAB_3_ISOHORIC_PROCESS_H
