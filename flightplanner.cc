https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "flight.h" 

void FlightPlanner::addAirport(const std::string &name) {
    airport.push_back(name);
}
void FlightPlanner::addFlight(const std::string &from, const std::string &to, int duration, int price, const std::string &name) {
    auto flight = std::make_shared<Flight>(from, to, duration, price, name);
    flights.push_back(flight);
}
std::vector<std::shared_ptr<FlightPlan>> FlightPlanner::planTrip(const std::string &from, const std::string &to) {
    std::vector<std::string> visited;
    // flightplan is the array of path and should be returned
    // create new FlightPlan object in the recursive helper function and push to flightplan
    findTrip(from, to, visited);

    return plan;
}

void findTrip(const std::string &from, const std::string &to, std::vector<std::string> visited) {
	std::vector<std::shared_ptr<FlightPlan>> p;
	visited.push_back(from);
	if（from == to) {
		return;
	}
	else {

		for(auto &f : flights) {
			//if is not visited
			if(from == f.getFrom() && std::find(visited.begin(), visited.end(), f) == visited.end()) {
				findTrip(f, to, visited);
			}
		}
	}


}   	

