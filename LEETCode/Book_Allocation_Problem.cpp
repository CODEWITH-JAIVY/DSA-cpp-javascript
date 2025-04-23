/*
Problem statement
Ayush is studying for ninjatest which will be held after 'N' days, And to score good marks he has to study 'M' chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.

1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.

2. If he starts some chapter on a particular day he completes it that day itself.

3. He wants to distribute his workload over 'N' days, so he wants to minimize the maximum amount of time he studies in a day.

Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.

For example

if Ayush want to study 6 chapters in 3 days and the time that each chapter requires is as follows:
Chapter 1 = 30
Chapter 2 = 20
Chapter 3 = 10
Chapter 4 = 40
Chapter 5 = 5
Chapter 6 = 45

Then he will study the chapters in the following order 

| day 1 : 1 , 2 | day 2 : 3 , 4 | day 3 : 5 , 6 |
Here we can see that he study chapters in sequential order and the maximum time to study on a day is 50, which is the minimum possible in this case.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= N , M <= 10 ^ 4
1 <= TIME[i] <= 10 ^ 9 
It is considered that there are infinite seconds in a day, on the planet where Ayush lives.

*/

#include <iostream>
#include <vector>
using namespace std;

// Check if it's possible to finish all chapters within 'days' with max 'limit' per day
bool isPossible(const vector<int>& time, int days, long long limit) {
    int dayCount = 1;
    long long timeSum = 0;
    for (int t : time) {
        if (t > limit) return false; // Can't finish this chapter in a day
        if (timeSum + t <= limit) {
            timeSum += t;
        } else {
            dayCount++;      // Start new day
            timeSum = t;
            if (dayCount > days) return false;
        }
    }
    return true;
}
long long ayushGivesNinjatest(int N, int M, vector<int>& time) {
    long long start = 0, end = 0, answer = -1;
      for (int t : time) {
        end += t; // Max possible time is sum of all
    }
    while (start <= end) {
        long long mid = start + (end - start) / 2;
        if (isPossible(time, N, mid)) {
            answer = mid;
            end = mid - 1; // Try to minimize further
        } else {
            start = mid + 1;
        }
    }
    return answer;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> time(M);

        for (int i = 0; i < M; ++i) {
            cin >> time[i];
        }

        cout << ayushGivesNinjatest(N, M, time) << endl;
    }

    return 0;
}
