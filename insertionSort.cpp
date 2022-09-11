void insertionSort1(int n, vector<int> arr) {
       int key;
         
       for(int i = 1; i < n; i++){
          key = arr[i];
          int j = i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            --j;
            
             for(int j=0 ; j<n ; j++){
                  cout<<arr[j]<< " ";
              }
              cout<<endl;
        }
        arr[j+1]=key;
        }
       
           for(int j=0 ; j<n ; j++){
                  cout<<arr[j] << " ";
              }
              cout<<endl;
          }
