#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

using namespace std;
namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int diff = left - right;
    int result = diff * diff;
    return result;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    // Write your code here ...

    return false;
  }
  // << с помощью сдвига
  // Task 3
  int max3(int left, int middle, int right) {
    int i;
    int massive[] = {left, middle, right};
    int result = massive[0];
    for (i = 0; i < 3; i++){
      result = max(result, massive[i]);
    }
    return result;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    int change = *left;
    *left = *right;
    *right = change;
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    // Write your code here ...

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
