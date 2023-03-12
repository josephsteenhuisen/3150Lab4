#include <iostream>

#include "linked_list.h"

using namespace std;

struct node* build_linked_list(const int elements) {
  struct node * linked_list = new node;
  struct node * root = linked_list;
  
  for(int i = 0; i < elements; i++) {
  linked_list->next = new node;
  linked_list->number = i;
  linked_list = linked_list->next;
  linked_list->jumper = linked_list->next;
  }
  linked_list->next = linked_list;
  linked_list->jumper = linked_list;
  return root;
}


struct node * pointer_jumper_linked_list(struct node * linked_list, const int elements) {
  for(int i = 0; i < elements; i++) {
    linked_list = linked_list->next;
  }
  return linked_list;
}
  

int * f0(int x) {
  int * array1 = new int[x];  
  for (int i = 0; i < x; i++) {
    array1[i]=i;
  }
  return array1;
}

int g(int * x) {
  for (int i = 0; i < 4; i++) {
    cout << x[i] << " ";
  }
  cout << endl;
  return 1;
}
  
int print_jumper_next_node(struct node * array_ptrs, const int elements) {
  
  int totaL = 0;
  struct node * my_node = array_ptrs;
  for (int i = 0; i < elements; i++) {
    struct node *node_ptr = array_ptrs[i].jumper;
    int num = node_ptr->number;
    total += number;
    cout << num << " " << endl;
    }
    
    return total;
}  
  
struct node * array_ptrs_to_each_element_in_linked_list(struct node * origional_list, const int element) {
  struct node * array_elements = new node[element];
  struct node * root = array_elements;
  
  for(int i = 0; i < element; i++) {
    array_elements[i].number = origional_list->number;
    array_elements[i].next = origional_list->next;
    array_elements[i].jumper = origional_list->jumper;
    origional_list = origional_list->next;
  }
    
  return root;
}


int sum_values_in_linked_list(struct node * list, const int elements) {
  
  int sum = 0;
  
  struct node * my_node = list;
  for (int i = 0; i < elements; i++) {
    sum += my_node->number;
    my_node = my_node->next;
    }
    
    return sum;
  }
  
int print_array_list(struct node * list, const int elements) {
  cout << "print_array_list start " << endl;
  for(int i = 0; i < elements; i++) {
    cout << list[i].number << " " << endl;
  }
  cout << "print_array_list stop " << endl;
  return elements;
}

int print_linked_list(struct node * list, const int elements) {
  struct node * my_node = list;
  for(int i =0; i < elements; i++) {
    cout << my_node->number << " " << endl;
    my_node = my_node->next;
    }
    
    return elements;
  }

int delete_linked_list(struct node * list, const int elements) {
  int count = 0;
  
  struct node * my_node = list;
  for (int i = 0; i < elements; i++) {
    struct node * prev_node = my_node;
    my_node = my_node->next;
    
    delete prev_node;
    count++;
  }
  
  return count;
}
  
