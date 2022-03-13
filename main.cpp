#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;

int main() {
  int arr[] = {1, 2, 3};
  int* ptr_arr = &arr[0];
//  cout << arr_sum(ptr_arr, 3) << endl;
//  cout << *find_max_elem(ptr_arr, 3) << endl;
  cout << *allocate_arr(3, 4) << endl;
  cout << *clone_arr(ptr_arr, 3) << endl;
  cout << print_kth_elements(ptr_arr, 3, 1, ) << endl;
  return 0;
}
