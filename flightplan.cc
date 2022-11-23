https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <flight.h>
#include <cmath>

std::vector<std::shared_ptr<Flight>> FlightPlan::getSteps();
int FlightPlan::getDuration() {
    return duration;
}
int FlightPlan::getPrice() {
    return price;
}
int FlightPlan::getPain() {
    return pain;
}
void FlightPlan::setPrice() {
    price = 0;
    for(auto &p: flights) {
        price += p->getPrice();
    }
}
void FlightPlan::setDuration() {
    duration = 0;
    for(auto &p: flights) {
        duration += p->getDuration();
    }
}
void FlightPlan::setPain() {
    pain = floor(pow(1.2, duration)*price);
}