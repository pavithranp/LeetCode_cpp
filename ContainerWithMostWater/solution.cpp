//Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
//
class Solution {
public:
    int maxArea(vector<int>& height)  {
      
        int s, e;
        s=0;
        e=height.size() - 1;
        int max_area = 0;
        
        while (s < e) // till overlap
        {
            max_area = max(max_area,area(height,s,e));
            // cout<<s <<" " <<e << " "<< area(height,s,e) << endl;
            if(height[s] < height[e])
                s++; // shift start
            else
                e--; // shift end
            
        }
        return max_area;
    }
    
    int area(vector <int>& a, int s, int e){
        return min(a[s],a[e])*(e - s);  //calculate area
    }
};
