#include <iostream>
#include <queue>

using namespace std;

class RecentCounter
{
private:
    queue<int> requests;

public:
    RecentCounter() {}

    int ping(int t)
    {
        requests.push(t);
        while (!requests.empty() && requests.front() < t - 3000)
        {
            requests.pop();
        }

        return requests.size();
    }
};

void testRecentRequest()
{
    RecentCounter recentCounter;

    cout << "Test 1: " << recentCounter.ping(1) << endl;
    cout << "Test 2: " << recentCounter.ping(100) << endl;
    cout << "Test 3: " << recentCounter.ping(3001) << endl;
    cout << "Test 4: " << recentCounter.ping(3002) << endl;
}

int main()
{
    testRecentRequest();

    return 0;
}