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
        sort(points.begin(), points.end(), [](const Point2D& p1, const Point2D& p2){
            if(p1.x == p2.x){
                return p1.y > p2.y;
            }
            return p1.x < p2.x;
        });
        // Print the points
        for(auto& p: points) {
            printf("%d %d\n", p.x, p.y);
        }
    }
    return 0;
}

