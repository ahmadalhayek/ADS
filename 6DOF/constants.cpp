/*constants.cpp*/
#include "constants.h"

//
// Constants that will be used throuhout the 6DOF simulator.
// THIS AND CONSTANTS.H ARE THE ONLY CODE THAT SHOULD BE TOUCHED DAY OF FLIGHT
// Should be measured and changed on the day of flight to represent the actual rocket
//
// ADS 6DOF Simulator
// Shishir Bandapalli, Max Hughes, Tara Saxena, Preston Shin
// NUSTARS NSL 2025
//

// control function for ADS actuation, ramps from F=0 at t=0 to F=1 at t=f (a is defined by the function)
double F(double t){ 
    double f = 0.5;
    double u = 0.0;
if (t < 0){
    u = 0.0;
}
else if(t>f){
    u = 1.0;
}
else{
    u = (1/f) * t;
}
return u;
}