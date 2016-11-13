#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <map>
#define MAX_Course_ID 1000
#define MAX_Instructor 10
#define term 2 // 0-> Fall, 1->Spring
#define time  100
#define MAX_DAY 100
#define MAX_YERA 5
using namespace std;

map <string, int> Hash;
//int user_pref = [maxn][maxcourse_num];


struct courses{
	string instructor, name;
//int term ;  //1->Fall, 0-> Spring
	int yr, capacity[MAX_YEAR], month, day, enroll[MAX_YEAR][MAX_DAY], wl[MAX_YEAR][MAX_DAY];
}course[MAX_Course_ID];

struct acc_sum{
	int day[MAX_DAY]; 
	string name, instructor;
}course_enroll[MAX_Course_ID], course_wl[MAX_Coure_ID];

int course_id;


int init(){
//i = 0;
	int day_num = 0;
	scanf("%d",&day_num);
	string instructor, name;
	cin >> instructor;
	cout << instructor;
	cin >> name;
	cout << name;
	//int prev = 0;
	course_id = 1;
	init_yr  = -1;
	course[course_id].name = name;
	course[course_id].instructor = instructor;
	for (int i=0; i<day_num;i++){
		int month, day, yr;
		cin >> month >> day >> yr;
		course[i].name = name;
		if (yr > init_yt){
			init_yr = yr;
		}
		course[i].instructor = instructor;
		//course[i].month, course[i].day, course[i].yr = month, day, yr;
		cin >> course[i].day;
		int x, y, z;
		cin >> x >> y >> z;
		int day = i, id = course_id;
		//cut << "day "<< day<< " month " << month << " year " << yr <<endl;
		course[id].enroll[init_yr-yr+1][day] = x ;
		course[id].capacity[init-yr+1] = y;
		course[id].wl[init_yr-yr+1][day] = z;
	}

	for (int i=0; i<day_num; i++){
		cout << course[i].name <<" "<< course[i].instructor<<" " << course[i].current_enroll << " "<< course[i].current_wl<<endl;
//printf("%d %d",course[i].day, course[i].current_enroll);
	}
		
}

bool possible_at_x(int phase, int id, int day){
	bool f[10];
	memset(f, 0, sizeof(f));
	for (int i=1; i<=3; i++){
		f[i] = (course[id].wl[i][find_phase_end(phase)] >= 0.2 * course[id].capacity and course[id].enroll[i][day] >= 0.9 * course[i].capacity) or (course[id].[i][day] - (course[id].cap[i] - course[id].enroll[i][day]) >= 0.2 * course[id].cap[i])
	}
	for (int i=1; i<=3; i++){
	if (f[i]) ans += 0.25;
	if (ans >= 0.75)
		return true
	else
		return false
}


bool reserve_possible_at_x(int phase, int id){
	bool f[10];
	memset(f, 0, sizeof(f));
	for (int i=1; i <= 3; i++){
		f[i] = course[id].enrol[find_end_time(i, id)]l > course[id].capacity
	}
	ans = 0
	for (int i=1; i<=3; i++){
		if (f[i]) ans += 0.25;
	if (ans >= 0.75)
		return true
	else
		return false
	}
}


int return_phase_x(int id, int yr, int phase1time, int phase2time, int aptime, bool reserved){
	if (!reserved){
		int now = find_today(id);
		if ((course[id].enroll[0][now] >= course[id].capacity) or (course[id].capacity - course[id].enrolle[0][now] >= course[id].wl[0][now])){
			return "Phase 1"
		else
			if possible_at_phase_x(2, course, phase2time){
				if not possible_at_phase_x(3, course, aptime)
					return "Phase 2"
				return "Phase 3"
			}
			else
				return "Phase 1"
		}
	}
	else{
		int now = find_today(id);
		if ((course[id].enroll[0][now] >= course[id].capacity) or (course[id].capacity - course[id].enrolle[0][now] >= course[id].wl[0][now])){
			return "Phase 1"
		else
			if reserve_possible_at_phase_x(2, course, phase2time){
				if not reserve_possible_at_phase_x(3, course, aptime)
					return "Phase 2"
				return "Phase 3"
			}
			else
				return "Phase 1"
	}

}

int main(){
	freopen("test1.in","r",stdin);
//freopen("test1.out","w",stdout);
	init();	

	procedure()

	fclose(stdin);
  //  fclose(stdout);
}


