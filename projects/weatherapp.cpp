/*
Author: Samuel Parente
Date: [Insert Date]
Description: Console-based Weather App in C++ using OpenWeatherMap API
*/

#include <iostream>
#include <string>
#include <curl/curl.h> // Include libcurl for making HTTP requests

// Callback function for libcurl to write received data
size_t writeCallback(char* ptr, size_t size, size_t nmemb, std::string* data) {
    data->append(ptr, size * nmemb);
    return size * nmemb;
}

// Function to get weather information for a given city using OpenWeatherMap API
void getWeather(const std::string& city) {
    // API key for accessing OpenWeatherMap API (replace with your own API key)
    std::string apiKey = "YOUR_API_KEY_HERE";
    // API endpoint for current weather data
    std::string apiUrl = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=" + apiKey;

    // Initialize libcurl
    CURL* curl = curl_easy_init();
    if (curl) {
        std::string responseData;
        // Set libcurl options
        curl_easy_setopt(curl, CURLOPT_URL, apiUrl.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &responseData);

        // Perform HTTP request
        CURLcode res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            // Print received weather data
            std::cout << "Weather for " << city << ": " << responseData << std::endl;
        } else {
            std::cerr << "Error: Failed to fetch weather data." << std::endl;
        }

        // Cleanup libcurl
        curl_easy_cleanup(curl);
    } else {
        std::cerr << "Error: Failed to initialize libcurl." << std::endl;
    }
}

int main() {
    std::string city;

    std::cout << "Console Weather App" << std::endl;
    std::cout << "Enter the name of the city to get the weather information: ";
    std::getline(std::cin, city);

    // Get weather information for the specified city
    getWeather(city);

    return 0;
}
