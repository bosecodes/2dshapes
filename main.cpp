/* N.B. : I'VE USED THE GOTO APPROACH HERE, but you might not use it in your own code, it is absolutely possible to write the code without
using goto statements.*/
//                                       
//All rights reserved
// JOKING!



#include <bits/stdc++.h>

using namespace std;

float triangle(int b, int h){
    float area = 0.5 * b * h;
    return area;
}
float rect(int a, int b){
    float area = a * b;
    return area;
}
float circle(int r){
    float area = 3.14 * r * r;
    return area;
}
float square(int a){
    float area = a * a;
    return area;
}

int main(){
    int e = 100;
    ios_base::sync_with_stdio();
    int input, b, h, x, y;
    float a;
    while(e){
        mainmenu:
        cout << "Enter 1 for triangle, 2 for rectangle, 3 for circle, 4 for square\n";
        cin >> input;
        if(input == 1){
            prevmenu:
            cout << "Press 1 to calculate area from base and height\nPress 2 to calculate area from sides\n";
            int c;
            cin >> c;
            last:
            if(c == 1){
            cout << "Enter base and height of the triangle\n";
            cin >> b >> h;
            a = triangle(b,h);
            }
            if(c == 2){
                cout << "Enter the three sides of the triangle";
                int s1,s2,s3;
                cin >> s1 >> s2 >> s3;
                float s = ( s1 + s2 + s3 )/ 2;
                a = sqrt(s*(s-s1)*(s-s2)*(s-s3));
            }
            cout << "The area of the figure is " << a << "\n";
            int nowc;
                cout << "Enter 1 to go to the main menu\nEnter 2 to go to the prev menu\nEnter 3 to perform the same o/p again\n4 to exit\n";
                cin >> nowc;
                if(nowc == 1){
                    goto mainmenu;
                }
                if(nowc == 2){
                    goto prevmenu;
                }
                if(nowc == 3){
                    goto last;
                }

                if(nowc == 4){
                    goto exit;
                }
        }//end of triangle

        else if(input == 2){
            prevmenu2:
            cout << "Enter 1 to calculate the area from base and height\nEnter 2 to calculate area from sides\n";
            int c;
            cin >> c;
            last2:
            if(c == 1){
                cout << "Enter the base and height\n";
                cin >> b >> h;
                a = b * h;
            }
            if(c == 2){
                cout << "Enter the 2 sides of the rectangle\n";
                cin >> x >> y;
                a = rect(x,y);
                }
                cout << "The area of the figure is " << a << "\n";
                int nowc;
                cout << "Enter 1 to go to the main menu\nEnter 2 to go to the prev menu\nEnter 3 to perform the same o/p again\n4 to exit\n";
                cin >> nowc;
                if(nowc == 1){
                    goto mainmenu;
                }
                if(nowc == 2){
                    goto prevmenu2;
                }
                if(nowc == 3){
                    goto last2;
                }

                if(nowc == 4){
                    goto exit;
                }
        }//end of rectangle
        else if(input == 3){
            prevmenu3:
            cout << "Enter 1 to calculate area from circumference\nEnter 2 to calculate area from radius\n";
            int c;
            cin >> c;
            last3:
            if(c == 1){
                cout << "Enter the circumference\n";
                int circum;
                cin >> circum;
                a = (circum*circum)/(4*3.14);
            }
            if(c == 2){
            cout << "Enter the radius of the circle\n";
            cin >> x;
            a = circle(x);
            }
            cout << "The area of the figure is " << a << "\n";
            int nowc;
                cout << "Enter 1 to go to the main menu\nEnter 2 to go to the prev menu\nEnter 3 to perform the same o/p again\n4 to exit\n";
                cin >> nowc;
                if(nowc == 1){
                    goto mainmenu;
                }
                if(nowc == 2){
                    goto prevmenu3;
                }
                if(nowc == 3){
                    goto last3;
                }

                if(nowc == 4){
                    goto exit;
                }
        }//end of circle
        else if(input == 4){
            prevmenu4:
            cout << "Enter 1 to calculate area from diagonal and\nEnter 2 to calculate from side\n";
            int c;
            cin >> c;
            last4:
            if(c == 1){
                cout <<"Enter the diagonal\n";
                int d;
                cin >> d;
                a = (d*d) /2;
            }
            if(c == 2){
                cout << "Enter one side of a square\n";
            cin >> x;
            a = square(x);
            }
            cout << "The area of the figure is " << a << "\n";
            int nowc;
                cout << "Enter 1 to go to the main menu\nEnter 2 to go to the prev menu\nEnter 3 to perform the same o/p again\n4 to exit\n";
                cin >> nowc;
                if(nowc == 1){
                    goto mainmenu;
                }
                if(nowc == 2){
                    goto prevmenu4;
                }
                if(nowc == 3){
                    goto last4;
                }
                if(nowc == 4){
                    goto exit;
                }
        }//end of square
        else{
           cout << "Wrong input! Try again!!!" << "\n";
        }
    }
    exit:
        cout << "Thanks!\n";
}
