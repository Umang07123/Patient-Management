#include <iostream>
	using namespace std;
	string h_name,hlocation;
	int sbed;
	int s=1;
class Hospital{
public:
    string hname,location;
    int beds;
    public:
	void thd(){
	    cin.ignore();
	    cout<<"Add Hospital Name"<<endl;
	    getline(cin,hname);
	    cout<<"Add location"<<endl;
	    getline(cin,location);
        cout<<" Available Beds"<<endl;
	    cin>>beds;
	 }
void dhd(){
	cout<<"Hospital Name : "<<hname<<endl;
		cout<<"location : "<<location<<endl;
	cout<<"NO of Beds Available : "<<beds<<endl;
	}
		};
class Patient:public Hospital{
        private:
        string pname;
        int id;
        public:
	    void tpd(){
	    cin.ignore();
	    cout<<"Add Patient Name"<<endl;
	    getline(cin,pname);
        cout<<"Add Patient id"<<endl;
	    cin>>id;
	}
void dpd(){
	   cout<<"Patient Name: "<<pname<<endl;
	   cout<<"Patient Id : "<<id<<endl;
	 }
int search_h(){
	   if(h_name==hname && hlocation==location){
       return 1;
	  }
	   else{
	   return 0;
	 }
	 }
	 };
int main() {
    Patient data[100];
    int choice;
	int end=1;
	int h=0;
	int p=0;
	int search_choice;
	cout<<"HOSPITAL MANAGEMENT SYSTEM"<<endl;
    while(end){
	cout<<"CHOOSE THE OPTION TO PROCEED"<<endl;
	cout<<"1 - Add Hospital \n 2 - Add Patient\n 3 - Update in Bed Availability\n 4 - Check hospitals\n 5 - Search\n 6 - Home "<<endl;
	cin>>choice;
    switch(choice){
    case 1:
	cout<<" Add Hospital "<<endl;
	data[h].thd();
	h++;
    break;
    case 2:
	cout<<"Add Patients "<<endl;
    data[p].tpd();
	p++;
    break;
    case 3:
    cin.ignore();
	cout<<"Hospital Name : "<<endl;
	getline(cin,h_name);
	cout<<"Location: "<<endl;
	getline(cin,hlocation);
	for(int i=0;i<h;i++){
	if(data[i].search_h() == 1){
	data[i].dhd();
	cout<<"ENTER THE BEDS"<<endl;
	cin>>data[i].beds;
    s=1;
	break;
	}
	else{
	s=0;
	}
	}
	if(s==0){
	cout<<"NOT FOUND"<<endl;
    }
	break;
    case 4:
	for(int i=0;i<h;i++){
	data[i].dhd();
	}
    break;
    case 5:
    cout<<"CHOOSE THE OPTION BELOW "<<endl<<"1 - SEARCH BY Name"<<endl<<"2 - SEARCH BY BEDS AVAILABLE"<<endl;
	cin>>search_choice;
    switch(search_choice){
    case 1:
	cin.ignore();
	cout<<"NAME OF THE HOSPITAL"<<endl;
	getline(cin,h_name);
	cout<<"Location"<<endl;
	getline(cin,hlocation);
	for(int i=0;i<h;i++){
	if(data[i].search_h()==1){
	cout<<"FOUND"<<endl;
	data[i].dhd();
	s=1;
	break;
	}else{
	s=0;
	}
	}
	if(s==0){
	cout<<"NOT FOUND"<<endl;
	}
          break;
          case 2:
	cout<<"ENTER THE BEDS"<<endl;
	cin>>sbed;
	for(int i=0;i<h;i++){
    	if(data[i].beds>=sbed){
	data[i].dhd();
	s=1;
	}
    else{
	s=0;
	}
	}
	if(s==0){
	cout<<"NOT FOUND"<<endl;
	}
	break;
	}
            break;
            case 6:
	end=0;
	break;
    default:cout<<"ENTER VALID OPTION"<<endl;
	}
	}
	cout<<"VISIT AGAIN!!!!!";
	}
