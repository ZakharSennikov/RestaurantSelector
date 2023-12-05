#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;


// Creates the Business Object with variables of name, latitude, longitude, star rating, categories, and distance
struct Business {
    string name;
    double latitude;
    double longitude;
    double stars;
    string categories;
    double distance;
};

// Partition function for QuickSort
int partition(vector<Business>& businesses, int low, int high) {
    double pivot = businesses[high].distance;
    int i = (low - 1);

    for (int j = low; j <= high - 1; ++j) {
        if (businesses[j].distance <= pivot) {
            ++i;
            swap(businesses[i], businesses[j]);
        }
    }

    swap(businesses[i + 1], businesses[high]);
    return (i + 1);
}

// QuickSort algorithm
void quickSort(vector<Business>& businesses, int low, int high) {
    if (low < high) {
        int pi = partition(businesses, low, high);

        quickSort(businesses, low, pi - 1);
        quickSort(businesses, pi + 1, high);
    }
}

// Creates the business vector that takes in the name of the file to open along with user inputed latitude and longitude
vector<Business> extractBusinessInfo(const string& filename, double userlat, double userlong) {
    vector<Business> businesses;

    // Returns an empty vector if the filenames don't match
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        cerr << "Error opening input file." << endl;
        return businesses;
    }

    // Stores each individual business's info and puts it in the vector
    string line;
    while (getline(inputFile, line)) {
        Business business;

        size_t pos = 1; // this skips the first char bc its always "
        while (pos < line.size() && line[pos] != '"') {
            business.name += line[pos++];
        }

        pos += 2; // past the quote and comma
        business.latitude = stod(line.substr(pos, line.find(',', pos) - pos));
        pos = line.find(',', pos) + 1;

        business.longitude = stod(line.substr(pos, line.find(',', pos) - pos));
        pos = line.find(',', pos) + 1;

        business.stars = stod(line.substr(pos, line.find(',', pos) - pos));
        pos = line.find(',', pos) + 1;

        pos += 2;
        business.categories = line.substr(pos, line.find('"', pos) - pos);

        business.distance = sqrt(pow(business.latitude - userlat, 2) + pow(business.longitude - userlong, 2));

        businesses.push_back(business);
    }

    // Sorts the business vector by distance using our bool sort
    quickSort(businesses, 0, businesses.size() - 1);

    return businesses;
}

//
//int main() {
//
//    double userlong;
//    double userlat;
//
//    // user inputed latitude and longitude
//    cout << "Enter Longitude:" << endl;
//    cin >> userlong;
//    cout << "Enter Latitude:" << endl;
//    cin >> userlat;
//
//    // Provide the path to your file
//    string filename = "output.txt";
//
//    // calls our function that creates the business vector from our input file with user inputed latitude and longitude
//    vector<Business> businesses = extractBusinessInfo(filename, userlat, userlong);
//
//    // Print the extracted information
//    for (const auto& business : businesses) {
//        cout << "Name: " << business.name << endl;
//        cout << "Latitude: " << business.latitude << endl;
//        cout << "Longitude: " << business.longitude << endl;
//        cout << "Stars: " << business.stars << endl;
//        cout << "Categories: " << business.categories << endl;
//        cout << " " << endl;
//    }
//
//
//    return 0;
//}
