//
//  Created by Jonas Anseeuw
//  Copyright (c) 2014 Jonas Anseeuw. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class InsertionSort {
public:
	void operator() (vector<T> & v) const{
		for(int i=1;i<v.size();i++){
			int h=v[i];
			int j=i-1;
			while(j>=0 && h<v[j]){
				v[j+1]=v[j];
				j--;
			}
			v[j+1]=h;
		}
	}
};

int main(int argc, const char * argv[])
{
	int temp[] = {16,2,77,29, 6, 19, 15, 88};
	vector<int> array (temp, temp + sizeof(temp) / sizeof(int) );
	
	InsertionSort<int> insertionSort;
	insertionSort(array);
	
	cout << "Sorted array is \n";
	for(int i=0; i<array.size(); i++){
		cout<<array[i]<<" ";
	}
	
    return 0;
}

