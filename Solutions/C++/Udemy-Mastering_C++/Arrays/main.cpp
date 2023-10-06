#include <iostream>
using namespace std;
int main()
{
  int num[100]{0};
  int entry_num{0};
  cout << "Enter the number of element you want to add : ";
  cin >> entry_num;
  cout << "Number of element " << entry_num << endl;

  for (int i = 0; i < entry_num; ++i)
  {
    cout << "Enter num " << i << ":";
    cin >> num[i];
  }

  for (int j = 0; j < entry_num; ++j)
  {
    cout << "Num [" << j << "] :  " << num[j] << endl;
  }

  return 0;
}