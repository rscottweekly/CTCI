#ifndef CTCI_LIBRARY_H
#define CTCI_LIBRARY_H

#import <exception>

namespace tci {

    enum BiologicalSex {
        male, female, indeterminate
    };

    class TCIException : std::exception {
    };

    class BiologicalSexException : TCIException {
    };

    namespace weight {
        double james(double height, double weight, BiologicalSex sex);

        double boer(double height, double weight, BiologicalSex sex);

        double hume66(double height, double weight, BiologicalSex sex);

        double hume71(double height, double weight, BiologicalSex sex);

        double jaanmhastion(double height, double weight, BiologicalSex sex);

        double bmi(double height, double weight);

        double idealBodyWeight(double height, double weight, BiologicalSex sex);

        double adjustedBodyWeight(double height, double weight, BiologicalSex sex);
    }

    namespace model {

    }
}


#endif //CTCI_LIBRARY_H