#include <iostream>
#include <string>
enum shape{ Tetrahedron = 4, Cube = 6, Octahedron = 8, Dodecahedron = 12, Icosahedron = 20};
int main()
{
    int a, sum = 0;
    std::cin >> a;
    while(a!=0){
        std::string word;
        std::cin >> word;
        
        if (word == "Tetrahedron") {
            sum += Tetrahedron;
        } else if (word == "Cube") {
            sum += Cube;
        } else if (word == "Octahedron") {
            sum += Octahedron;
        } else if (word == "Dodecahedron") {
            sum += Dodecahedron;
        } else if (word == "Icosahedron") {
            sum += Icosahedron;
        }
        
        a--;
    }
    std::cout << sum << std::endl;
}
