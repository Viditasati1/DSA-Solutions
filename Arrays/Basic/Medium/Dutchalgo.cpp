// sort the array of 0,1,2;

// brute force way is to count the no. of 0,1,2 and 
// then arrange them using loop into new array and return it 
// TC (O(2N)) SC(O(N));




// optimized approach using dutch algo

  void sort012(vector<int>& arr) {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1) {
                mid++;
            }
            else if (arr[mid] == 2) {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }