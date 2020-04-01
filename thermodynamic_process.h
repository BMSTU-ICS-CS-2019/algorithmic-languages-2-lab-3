#ifndef ALGORITHMIC_LANGUAGES_2_LAB_1_THERMODYNAMIC_PROCESS_H
#define ALGORITHMIC_LANGUAGES_2_LAB_1_THERMODYNAMIC_PROCESS_H


/*
 * PV = 𝜈RT
 */
class ThermodynamicProcess {
protected:
    double nu_;
public:

    static constexpr long double R = 8.31446261815324;

    explicit ThermodynamicProcess(double nu);

    [[nodiscard]] virtual double getDeltaP() const = 0;

    [[nodiscard]] virtual double getDeltaV() const = 0;

    [[nodiscard]] virtual double getDeltaT() const = 0;

    [[nodiscard]] virtual double getA() const = 0;
};


#endif//ALGORITHMIC_LANGUAGES_2_LAB_1_THERMODYNAMIC_PROCESS_H
