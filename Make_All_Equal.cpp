    #include <iostream> 
    using namespace std; 
     
    int mostFrequent(int* arr, int n) 
    { 
    	int maxcount = 0; 
    	int element_having_max_freq; 
    	for (int i = 0; i < n; i++) { 
    		int count = 0; 
    		for (int j = 0; j < n; j++) { 
    			if (arr[i] == arr[j]) 
    				count++; 
    		} 
     
    		if (count > maxcount) { 
    			maxcount = count; 
    			element_having_max_freq = arr[i]; 
    		} 
    	} 
     
    	return element_having_max_freq; 
    } 
    int main() 
    { int t;cin>>t;
     while(t--){
    	int n;cin>>n;
    	int arr[n];for(int i=0;i<n;i++)cin>>arr[i]; 
    	int freq = mostFrequent(arr , n); 
    	int count = 0; 
    	for(int i = 0; i < n; i++) { 
    		if(arr[i] == freq) { 
    			count++; 
    		} 
    	} 
    	cout <<n-count << endl;; 
     }
    	return 0; 
     
    } 

