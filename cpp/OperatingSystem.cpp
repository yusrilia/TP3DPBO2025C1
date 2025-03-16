#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Software.cpp"

class OperatingSystem : public Software {
    private:
        string architecture;
        string kernelType;
    
    public:
        OperatingSystem(string n, string v, string arch, string kernel)
            : Software(n, v), architecture(arch), kernelType(kernel) {}
    
        // Getters
        string getArchitecture() { return architecture; }
        string getKernelType() { return kernelType; }
    
        // Setters
        void setArchitecture(string arch) { architecture = arch; }
        void setKernelType(string kernel) { kernelType = kernel; }
    };