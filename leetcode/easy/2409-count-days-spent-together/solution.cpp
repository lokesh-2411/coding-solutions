class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int prefix[13] = {0};
        for (int i = 0; i < 12; i++) {
            prefix[i + 1] = prefix[i] + days[i];
        }

        auto toDayOfYear = [&](const string& s) {
            int month = stoi(s.substr(0, 2));
            int day = stoi(s.substr(3, 2));
            return prefix[month - 1] + day;
        };

        int start = max(toDayOfYear(arriveAlice), toDayOfYear(arriveBob));
        int end = min(toDayOfYear(leaveAlice), toDayOfYear(leaveBob));

        return max(0, end - start + 1);
    }
};