#include "Restaurant.h"


Restaurant::Restaurant() {
	this->name = "";
	this->latitude = 0;
	this->longitude = 0;
	this->category = "";
}


Restaurant::Restaurant(std::string name, double latitude, double longitude, std::string category, float rating) {
	this->name = name;
	this->latitude = latitude;
	this->longitude = longitude;
	this->category = category;
	this->rating = rating;
}
// getters
std::string Restaurant::getName() {
	return this->name;
}
double Restaurant::getLongitude() {
	return this->longitude;
}
double Restaurant::getLatitude() {
	return this->latitude;
}
std::string Restaurant::getCategory() {
	return this->category;
}
float Restaurant::getRating() {
	return this->rating;
}

bool Restaurant::findCategory(System::String^ cat)
{
	//finds whether or not the desired category is in the list of categories and returns true or false
	int startIndex = 0, endIndex = 0;
	System::String^ category = gcnew System::String(this->category.c_str());
	if (category->Contains(cat) && category->Contains("Restaurant")) {
		return true;
	}
	return false;
}

bool Restaurant::isItClose(double lat, double lon)
{
	// this uses the latitude and longitude to see if the restaurant is within 20 miles of the desired location
	double hipotenuse = pow(latitude - lat, 2) + pow(longitude - lon, 2);
	hipotenuse = sqrt(hipotenuse);
	if (hipotenuse < 0.33) {
		return true;
	}
	return false;
}
