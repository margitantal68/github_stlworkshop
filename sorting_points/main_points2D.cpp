#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

struct Point2D {
    int x, y;
};

int main() {
    int numTestCases;
    scanf("%d", &numTestCases);
    for (int i = 0; i < numTestCases; ++i) {
        int numPoints;
        scanf("%d", &numPoints);
        vector<Point2D> points(numPoints);
        for (int j = 0; j < numPoints; ++j) {
            scanf("%d%d", &points[j].x, &points[j].y);

        }
        // Sort the points
        // Print the points
    }
    return 0;
}

