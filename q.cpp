#include <vector>
using namespace std;

        int n = nums.size();
        if(n==1) {
            return 0;
        }
        int l = 0;
        int r = n-1;

        while(l<=r) {
            int mid = l + (r - l) / 2; ;

            if(mid > 0 && nums[mid] < nums[mid - 1]) {
                r = mid-1;
            } else if(mid<n-1 && nums[mid]<nums[mid+1]) {
                l = mid+1;
            } else {
                return mid;
            }
        }
        return l;
    }
};