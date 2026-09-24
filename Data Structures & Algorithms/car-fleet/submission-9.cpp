class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        vector<double> result;
        sort(cars.begin(), cars.end(), greater<>());
        for (auto& [pos, time] : cars) {
            if (result.empty() || time > result.back()) {
                result.push_back(time);
            }
        }
        return result.size();
    }
};
