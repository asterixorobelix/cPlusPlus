/*
n children have got m pieces of candy. They want to eat as much candy as they can, but each child must eat exactly the same amount of candy as any other child. Determine how many pieces of candy will be eaten by all the children together. Individual pieces of candy cannot be split.

Example

For n = 3 and m = 10, the output should be
candies(n, m) = 9.

Each child will eat 3 pieces. So the answer is 9.

Input/Output

    [time limit] 500ms (cpp)

    [input] integer n

    The number of children.

    Constraints:
    1 ≤ n ≤ 10.

    [input] integer m

    The number of pieces of candy.

    Constraints:
    2 ≤ m ≤ 100.

    [output] integer

    The total number of pieces of candy the children will eat provided they eat as much as they can and all children eat the same amount.

*/
#include <iostream>
int candies(int n, int m);

int main(){
    std::cout<<"Enter number of children: \n";

    int children, candy;

    std::cin>>children;

    std::cout<<"Enter amount of candy: \n";

    std::cin>>candy;

    int answer=candies(children, candy);

    std::cout<<" The total number of pieces of candy the children will eat provided they eat as much as they can and all children eat the same amount: "<<answer<<std::endl;
}

int candies(int n, int m) {

    return (m/n)*n;

}
