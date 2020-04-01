#ifndef ALGORITHMIC_LANGUAGES_2_LAB_3_ISOBARIC_PROCESS_H
#define ALGORITHMIC_LANGUAGES_2_LAB_3_ISOBARIC_PROCESS_H


#include "thermodynamic_process.h"

class IsobaricProcess : public ThermodynamicProcess {
protected:
    long double const p_, deltaV_;

public:
    IsobaricProcess(double nu, double p, double deltaV);

    [[nodiscard]] long double getDeltaP() const override;

    [[nodiscard]] long double getDeltaV() const override;

    [[nodiscard]] long double getDeltaT() const override;

    [[nodiscard]] long double getA() const override;

    [[nodiscard]] std::string toString() const override;
};


#endif // ALGORITHMIC_LANGUAGES_2_LAB_3_ISOBARIC_PROCESS_H
