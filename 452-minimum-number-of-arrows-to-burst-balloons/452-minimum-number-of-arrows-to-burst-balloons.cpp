bool comp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) {
            return 0;
        }
        sort(points.begin(),points.end(), comp);
        int arrowPos=INT_MIN;
        int arrowCnt=0;
        for (int i = 0; i < points.size(); i++) {
            if (i==0 || arrowPos < points[i][0]) {
         
                arrowCnt++;
                arrowPos = points[i][1];
            }
        }
        return arrowCnt;
    }
};