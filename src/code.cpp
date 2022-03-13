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
    return (mask >> bit_pos) % 2 == 1;
  }
  // << сдвиг влево
  // >> сдвиг в право

  // Task 3
  int max3(int left, int middle, int right) {
    int massive[] = {left, middle, right};
    int result = massive[0];
    for (int i = 0; i < 3; i++) {
      result = max(result, massive[i]);
    }
    return result;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left == NULL || right == NULL) {  // проверка на нулевой указатель
    } else {
      int change = *left;
      *left = *right;
      *right = change;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr == nullptr or length <= 0)
      return 0;
    else {
      int result = 0;
      for (int i = 0; i < length; ++i)
        result += arr[i];
      return result;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int *result;
    if (arr == nullptr || length <= 0)
      return 0;
    else {
      result = &arr[0];
      for (int i = 1; i < length; ++i) {
        if (*result < arr[i])
          result = &arr[i];
      }
    }
    return result;
  }

  //    int *max;
  //    if (arr != nullptr and length > 0) {
  //      max = &arr[0];
  //      for (int i = 1; i < length; i++)
  //        if (arr[i] > *max)
  //          max = &arr[i];
  //    } else {
  //      return nullptr;
  //    }
  //    return max;
  //  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int *array;
      array = new int[length];
      fill(&array[0], &array[length], init_value);
      return array;
    } else
      return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (arr_in == nullptr || length <= 0)
      return nullptr;
      else {
        int *arr;
        arr = new int[length];
        for (int i = 0; i < length; ++i) {
          arr[i] = arr_in[i];
          cout << arr_in[i] << endl;
        }
        return arr;
      }
    }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    int number = 0;
    if (arr == nullptr)
      os << "Invalid argument: arr\n";
    if (length <= 0)
      os << "Invalid argument: length\n";
    if (k <= 0)
      os << "Invalid argument: k\n";
    for (int i = 1; i < k; ++i) {
      //       number++;
      //       if (k == number){
      if (i == k) {
        number = arr[i];
        break;
      }
    }
    os << "Мое сообщение\n";
  }
}  // namespace assignment
