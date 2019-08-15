#include "library.h"

#include <iostream>
#include <math.h>

double tci::weight::james(double height, double weight, tci::BiologicalSex sex) {
    switch (sex) {
        case male:
            return 1.1 * weight - 128 * ((weight / height) * (weight / height));
        case female:
            return 1.07 * weight - 148 * ((weight / height) * (weight / height));
        case indeterminate:
            throw tci::BiologicalSexException();
    }
}

double tci::weight::boer(double height, double weight, tci::BiologicalSex sex) {
    double lbm;
    switch (sex) {
        case male:
            lbm = (0.407 * weight) + (0.267 * height) - 19.2;
            break;
        case female:
            lbm = (0.252 * weight) + (0.473 * height) - 48.3;
            break;
        case indeterminate:
            throw tci::BiologicalSexException();
    }
    return lbm;
}

double tci::weight::hume66(double height, double weight, tci::BiologicalSex sex) {
    return 0;
}

double tci::weight::hume71(double height, double weight, tci::BiologicalSex sex) {
    return 0;
}

double tci::weight::jaanmhastion(double height, double weight, tci::BiologicalSex sex) {
    return 0;
}

double tci::weight::bmi(double height, double weight) {
    return 0;
}

double tci::weight::idealBodyWeight(double height, double weight, tci::BiologicalSex sex) {
    return 0;
}

double tci::weight::adjustedBodyWeight(double height, double weight, tci::BiologicalSex sex) {
    return 0;
}


