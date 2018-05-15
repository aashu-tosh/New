#include <iostream>/

using namespace std;

void head (){
    int day ;
    cout <<"Select the day: \n\t\t1. Sunday \n\t\t2. Monday \n\t\t3. Tuesday \n\t\t4. Wednesday \n\t\t5. Thursday \n\t\t6. Friday \n\n\t\tDay : ";
    string days[] = {"Invalid","Sunday","Monday", "Tuesday", "Wednesday","Thursday", "Friday"};
    cin >> day;
    string Sunday[]={"asdf","sdf","asadf"} ;
    string Invalid[]={"asdf","sdf","asadf"} ;
    string Monday[] ={"asdf","sdf","asadf"} ;
    string Tuesday[] ={"asdf","sdf","asadf"} ;
    string Wednesday[]={"asdf","sdf","asadf"} ;
    string Thursday[]={"asdf","sdf","asadf"} ;
    string Friday[]={"asdf","sdf","asadf"} ;

    string daysa[] = {Invalid,Sunday,Monday,Tuesday,Wednesday,Thursday,Friday};

    cout <<days[day]<<'\'s Rountine';
    cout <<daysa[day];

};


int main(){

/* day=int(input("""Select the day:
                 1. Sunday
                 2. Monday
                 3. Tuesday
                 4. Wednesday
                 5. Thursday
                 6. Friday

                 Day : """))
days = ['Invalid','Sunday','Monday', 'Tuesday', 'Wednesday','Thursday', 'Friday']




daysa = [Invalid,Sunday,Monday,Tuesday,Wednesday,Thursday,Friday]
print("{0:>150}'s Routine".format(days[day]))



print(daysa[day])
 0;
 */
head();
}




