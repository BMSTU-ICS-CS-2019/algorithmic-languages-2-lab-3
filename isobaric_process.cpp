#include "isobaric_process.h"

IsobaricProcess::IsobaricProcess(double const nu, double const p, double const deltaV) : ThermodynamicProcess(nu), p_(p), deltaV_(deltaV) {}

long double IsobaricProcess::getDeltaP() const {
    return 0;
}

long double IsobaricProcess::getDeltaV() const {
    return deltaV_;
}

long double IsobaricProcess::getDeltaT() const {
    return p_ * deltaV_ / (nu_ * R);
}

long double IsobaricProcess::getA() const {
    return p_ * deltaV_;
}
