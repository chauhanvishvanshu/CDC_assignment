
//https://www.naukri.com/code360/problems/reverse-the-array_1262298?leftPanelTabValue=SUBMISSION

void reverseArray(vector<int> &arr , int m) {
    // Write your code here      
     	int i =m+1;
        //why m+1 need to swap after m postion 
        int j =arr.size()-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
}

