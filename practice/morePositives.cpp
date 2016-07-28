#include <iostream>
#include <vector>
using namespace std;

bool morePositives (const vector<int>& v1, const vector<int>& v2){
    int count1 = 0, count2 = 0;
    for (int i = 0; i < v1.size(); i++){
        if (v1.at(i) > 0)
            count1++;
    }
    for (int i = 0; i < v2.size(); i++){
        if (v2.at(i) > 0)
            count2++;
    }
    return count1 > count2;
}

int main (){
    vector<int> nums1 = {0,6,25,-5,-3,9,7};
    vector<int> nums2 = {4,-12,7,19};
    if (morePositives(nums1, nums2))
        cout << "More positives in nums1" << endl;
    else  
        cout << "More positives in nums2" << endl;
}