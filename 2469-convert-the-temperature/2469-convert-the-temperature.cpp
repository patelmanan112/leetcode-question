class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> vp;

        double kelvin = celsius + 273.15;
        double fahrenheit = celsius*1.80 + 32.00;
        vp.push_back(kelvin);
        vp.push_back(fahrenheit);

        return vp;
    }
};