#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> vet;

   for(int i = 0; i < 40;i++){

    vet.push_back(i);

    cout << "Size: " << vet.size() <<" || Element: "<< vet[i]<< " || Capacity: "<< vet.capacity()<< endl;

   }
   vet.shrink_to_fit();
   cout << "Capacity: " << vet.capacity()<< endl;
   
   vet.erase(vet.begin()+7);

  for(int i = 0; i < vet.size(); i++){
    cout <<" Position: " << i <<" || Value: " << vet[i] << endl;
  }
  return 0;
}