#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char src, char dest, char temp){
    
    if(n == 0)
    return ;
    
    tower_of_hanoi(n-1, src, temp, dest);
    cout<<"Ring "<<n<<" Moved from "<<src<<" to "<<" "<<dest<<"\n";
    tower_of_hanoi(n-1, temp, dest, src);
}

int main() {
	
  tower_of_hanoi(3, 'A', 'B', 'C');
    
}