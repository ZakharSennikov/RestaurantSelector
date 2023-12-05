#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "MaxHeap.h"
using namespace std;

MaxHeap heap;

void extractBusinessInfo() {
    ifstream inputFile("output.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening input file." << endl;
    }
    else {
        string line;
            while (getline(inputFile, line)) {
                Restaurant business;

                size_t pos = 1; // this skips the first char bc its always "
                while (pos < line.size() && line[pos] != '"') {
                    business.name += line[pos++];
                }

                pos += 2; // past the quote and comma
                business.latitude = stod(line.substr(pos, line.find(',', pos) - pos));
                pos = line.find(',', pos) + 1;

                business.longitude = stod(line.substr(pos, line.find(',', pos) - pos));
                pos = line.find(',', pos) + 1;

                business.rating = stod(line.substr(pos, line.find(',', pos) - pos));
                pos = line.find(',', pos) + 1;

                pos += 2;
                business.category = line.substr(pos, line.find('"', pos) - pos);

                heap.insert(business);
            }
    }
    

}

int main() {
    // Provide the path to your file
    extractBusinessInfo();
    MaxHeap heap2;
    return 0;
}





//int main() {
//    // Provide the path to your file
//	std::ifstream inputFile("output.txt");
//	std::string name;
//	double latitude;
//	double longitude;
//	double stars;
//	std::string categories;
//	if (!inputFile.is_open()) {
//		std::cerr << "Error opening input file." << std::endl;
//	}
//	else {
//		std::string line;
//		while (getline(inputFile, line)) {
//			size_t pos = 1; // this skips the first char bc its always "
//			while (pos < line.size() && line[pos] != '"') {
//				name += line[pos++];
//			}
//			pos += 2; // past the quote and comma
//			latitude = stod(line.substr(pos, line.find(',', pos) - pos));
//			pos = line.find(',', pos) + 1;
//
//			longitude = stod(line.substr(pos, line.find(',', pos) - pos));
//			pos = line.find(',', pos) + 1;
//
//			stars = stod(line.substr(pos, line.find(',', pos) - pos));
//			pos = line.find(',', pos) + 1;
//
//			pos += 2;
//			categories = line.substr(pos, line.find('"', pos) - pos);
//			Restaurant rest(name, latitude, longitude, categories, stars);
//			heap.insert(rest);
//		}
//
//	}
//	std::cout << heap.extractMax().getName();
//
//    return 0;
//}
