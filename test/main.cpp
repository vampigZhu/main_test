#include <iostream>
int i,j;
int main() {
    for(i=0;i<9;i++){

        for(j=0;j<=i;j++){
            std::cout<<j+1<<"x"<<i+1<<"="<<(j+1)*(i+1)<<"\t";
        }
    std::cout<<"\n";
    }
    return 0;
}
