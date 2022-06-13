#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numberOfApp{0};
    cin >> numberOfApp;
    int p[numberOfApp], q[numberOfApp], m[numberOfApp];
    int i{0};
    vector<vector<int>> timeInterval(numberOfApp);
    
    vector<int> finalResult;
    

    while(i < numberOfApp){
        cin >> p[i] >> q[i] >> m[i];
        int resultCheck{0};
        int sum{0};
        int j{0};
        while(j < 2 * m[i]){
            int temp{0};
            int tempResult{0};
            cin >> temp;
            timeInterval[i].push_back(temp);
            
            if(j%2 == 1){
                tempResult = temp - timeInterval[i][j-1]; 
                sum += tempResult;
            }
            if(tempResult > q[i] && resultCheck != 1){
                finalResult.push_back(0);
                resultCheck = 1;
            }
            
            j++;
        
        }

        if(sum > p[i] && resultCheck != 1){
            finalResult.push_back(0);
            
        }
        else if(resultCheck == 0){
            finalResult.push_back(1);
        }
        
        i++;
    }

    for(int x : finalResult){
        cout<<x;
    }


    


}