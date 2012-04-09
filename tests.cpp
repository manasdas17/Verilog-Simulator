#include "global.h"
#include <iostream>
#include <cassert>
#include "net.h"
using namespace std;

void test_design()
{
  
}

void test_gates()
{
  
}

void test_net()
{
  Net n("test");
  assert(n.name() == "test");
  assert(n.getVal() == 'X');
  
  n.setVal('0');
  assert(n.getVal() == '0');
  n.setVal('X');
  
  
}

void test_parser()
{
  
}

int main (int argc, char const *argv[])
{
  test_net();
  
  cout << GREEN << "Tests completed." << RESET << endl;
  return 0;
}