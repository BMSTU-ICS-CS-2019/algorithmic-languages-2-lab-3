#include "isobaric_process.h"
#include "isohoric_process.h"
#include "thermodynamic_process.h"
#include <cstddef>
#include <iostream>
#include <memory>
#include <vector>

int main() {
    (std::cout << "Enter nu: ").flush();
    long double nu;
    std::cin >> nu;

    (std::cout << "Enter the number of processes: ").flush();
    size_t count = 0;
    std::cin >> count;

    std::vector<std::unique_ptr<ThermodynamicProcess>> processes(count);
    for (size_t i = 0; i < count; ++i) {
        (std::cout << "Enter process ID (1: isobaric, 2: isohoric): ").flush();
        size_t processId;
        std::cin >> processId;

        switch (processId) {
            case 1: {
                (std::cout << "Enter P: ").flush();
                long double p;
                std::cin >> p;

                (std::cout << "Enter deltaV: ").flush();
                long double deltaV;
                std::cin >> deltaV;

                processes[i] = std::make_unique<IsobaricProcess>(nu, p, deltaV);

                break;
            }
            case 2: {
                (std::cout << "Enter V: ").flush();
                long double v;
                std::cin >> v;

                (std::cout << "Enter deltaP: ").flush();
                long double deltaP;
                std::cin >> deltaP;

                processes[i] = std::make_unique<IsohoricProcess>(nu, v, deltaP);

                break;
            }
            default: {
                --i;
                std::cout << "Unknown process ID: " << processId << '\n';
            }
        }
    }

    long double totalA = 0;
    {
        size_t i = 0;
        for (auto const& process : processes) {
            auto const processA = process->getA();
            std::cout << "A[" << ++i << "] = " << processA << std::endl;
            totalA += processA;
        }
    }
    std::cout << "\ttotal A = " << totalA;

    return 0;
}
