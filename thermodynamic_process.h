#ifndef ALGORITHMIC_LANGUAGES_2_LAB_3_THERMODYNAMIC_PROCESS_H
#define ALGORITHMIC_LANGUAGES_2_LAB_3_THERMODYNAMIC_PROCESS_H

#include <string>

/*
 * PV = 𝜈RT
 */
class ThermodynamicProcess {
protected:
    long double nu_;
public:

    static constexpr long double R = 8.31446261815324;

    explicit ThermodynamicProcess(long double nu);

    [[nodiscard]] virtual long double getDeltaP() const = 0;

    [[nodiscard]] virtual long double getDeltaV() const = 0;

    [[nodiscard]] virtual long double getDeltaT() const = 0;

    [[nodiscard]] virtual long double getA() const = 0;

    [[nodiscard]] virtual std::string toString() const = 0;
};


#endif // ALGORITHMIC_LANGUAGES_2_LAB_3_THERMODYNAMIC_PROCESS_H
