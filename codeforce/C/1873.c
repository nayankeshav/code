#include <stdio.h>
#include <math.h>
int distance(int a, int b, int c, int d){
    int result;
    result = sqrt(pow((c-a),2) + pow((d-b),2));
    return result;
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        int count = 0;
        for(int j = 0; j<10 ; j++){
            char line[10];
            scanf("%s",line);
            for(int k = 0; k < 10; k++){
                if(line[k] == 'X'){
                    int edge_top, edge_bottom, edge_left, edge_right;
                    int smallest;
        
                    edge_top = distance(0,k,j,k);
                    smallest = edge_top;
                    
                    edge_bottom = distance(9,k,j,k);
                    if(edge_bottom < smallest){
                        smallest = edge_bottom;
                    }
                    edge_left = distance(j,0,j,k);
                    if(edge_left < smallest){
                        smallest = edge_left;
                    }
                    edge_right = distance(j,9,j,k);
                    if(edge_right < smallest){
                        smallest = edge_right;
                    } 
                    
                    count = count + smallest + 1;
                }
            }
        }
        printf("%d\n",count);
    }
}
