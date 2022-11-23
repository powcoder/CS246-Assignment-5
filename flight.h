https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#ifndef _FLIGHT_H_
#define _FLIGHT_H_

#include <string>
#include <vector>
#include <algorithm>


class FlightPlanner {
    std::vector<std::shared_ptr<FlightPlan>> flightplan;
    std::vector<std::string> airport;
    std::vector<std::shared_ptr<Flight>> flights;
    public:
    FlightPlanner() {}
    void addAirport(const std::string &name);
    void addFlight(const std::string &from, const std::string &to, int duration, int price, const std::string &name);
    std::vector<std::shared_ptr<FlightPlan>> planTrip(const std::string &from, const std::string &to);
    void findTrip(const std::string &from, const std::string &to, std::vector<std::shared_ptr<Flight>> visited);

};

class FlightPlan {
std::vector<std::shared_ptr<Flight>> plan;
int duration;
int price;
int pain;
public:
//return flight in the flightplan
std::vector<std::shared_ptr<Flight>> getSteps();
int getDuration();
int getPrice();
int getPain();
void setPrice();
void setDuration();
void setPain();

};

class Flight {
    std::string from;
    std::string to;
    int duration;
    int price;
    std::string name;
    
    public:
    Flight(std::string from, std::string to, int duration, int price, std::string name);
    std::string getFrom();
    std::string getTo();
    int getDuration();
    int getPrice();
    std::string getName();
};


class FlightNameException {

};

#endif
