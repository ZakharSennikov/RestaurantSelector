#pragma once
#include <fstream>
#include <string>
#include <cmath>
class Restaurant
{
public:
	std::string name;
	double latitude;
	double longitude;
	std::string category;
	float rating;
	Restaurant(std::string name, double latitude, double longitude, std::string category, float rating);
	Restaurant();
	// getters
	std::string getName();
	double getLongitude();
	double getLatitude();
	std::string getCategory();
	float getRating();
	bool findCategory(System::String^ cat);
	bool isItClose(double lat, double lon);
};
