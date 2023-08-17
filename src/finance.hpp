//To be implemented
#include <cmath>
class finance {
    public:
    float simple_interest(float principal, float i_rate, float time){
        return principal *(1 + i_rate*time);
    }
    float compound_interest(float principal, float i_rate, float time, float n_period){
        return pow(principal * (1 + i_rate/n_period), (n_period*time));
    }
};