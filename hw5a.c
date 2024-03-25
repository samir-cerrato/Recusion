/*Samir Cerrato
* COMP 211, Fall 2021, Wesleyan University
 * Homework #5, Problem 2
 *
 * Recursion.
 */

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

#include "hw5a.h"

int unimodal_search_r(int A[], int a, int b) {
  int low = a;
  int high = b;
  int m;

  if(a==b){
    return a;
  }
  if(b==a+1){
    if(A[a]>A[b]){
      return a;
    }else if(A[a]<A[b]){
      return b;
    }
  }

  m=low+((high-low)/2);
    if(A[m] > A[m+1] && A[m] > A[m-1]){
        return m;
      }
    if(A[m] < A[m+1] && A[m] > A[m-1]){
      return unimodal_search_r(A, m, b);
    }
    if(A[m] > A[m+1] && A[m] < A[m-1]){
      return unimodal_search_r(A, a, m);
    }
  }
