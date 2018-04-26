#ifndef CONFIG_H
#define CONFIG_H
namespace config {
        const int trigPrecision(9); //Amount of terms to be summed using trig functions
        const double pi(3.14159265); //Change this to use a more accurate value for pi
        const double bernoulli[] = {1, 1.0/2.0, 1.0/6.0, 0, -1.0/30.0, 0, 1.0/42.0, 0, -1.0/30.0, 0, 5.0/66.0, 0, -691.0/2730.0, 0, 7.0/6.0, 0, -3617.0/510.0, 0, 43867.0/798.0, 0, -174611.0/330.0};
        const int sqRootPrecision(10);
}
#endif
