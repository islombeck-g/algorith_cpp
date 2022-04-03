void shell_sort(std::vector<int>& arr){
    int t= arr.size()/2;
    bool sorted=false;
    while(!sorted){
        sorted=true;
       for(size_t i=0; i<arr.size(); i++)
           if (i + t < arr.size()) {
               if (arr[i] > arr[i + t]) {
                   std::swap(arr[i], arr[i + t]);
                   sorted = false;
               } else if (t != 1) {
                   t--;
                   sorted = false;
               }
           }
   }
}
