class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size();
        int i=0,j=n-1,ar,ma=0;
        while(i<j){
            ar=min(v[i],v[j])*(j-i);
            ma=max(ma,ar);
            if(v[i]<v[j])i++;
            else j--;
        }return ma;
    }
};
