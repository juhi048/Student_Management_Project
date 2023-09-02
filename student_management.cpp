#include<iostream>
using namespace std;

string name[20],contact[20],place[20],state[20],roll[20];
int total=0;
void enter(){
    int student;
    cout<<"How many students of data do you want to enter: ";
    cin>>student;
    if(total==0){
        total=total+student;
        for(int i = 0;i<student;i++){
            cout<<"Enter the data of student "<<i+1<<endl;
            cout<<"Enter the name of the student: ";
            cin>>name[i];
            cout<<"Enter thr contact number of the student: ";
            cin>>contact[i];
            cout<<"Enter the place of the student: ";
            cin>>place[i];
            cout<<"Enter the state of the student: ";
            cin>>state[i];
            cout<<"Enter the roll no. of the student: ";
            cin>>roll[i];
            cout<<endl;
        }
    }
    else{
        for(int i = total;i<student+total;i++){
            cout<<"Enter the data of student "<<i+1<<endl;
            cout<<"Enter the name of the student: ";
            cin>>name[i];
            cout<<"Enter thr contact number of the student: ";
            cin>>contact[i];
            cout<<"Enter the place of the student: ";
            cin>>place[i];
            cout<<"Enter the state of the student: ";
            cin>>state[i];
            cout<<"Enter the roll no. of the student: ";
            cin>>roll[i];
            cout<<endl;
        }
        total=total+student;
    }
}

void show(){
    if(total==0){
        cout<<"No data is entered"<<endl;
    }
    else{
        for(int i=0;i<total;i++){
            cout<<"Data of student "<<i+1<<endl;
            cout<<"Name of the student: "<<name[i]<<endl;
            cout<<"Contact of the student: "<<contact[i]<<endl;
            cout<<"Place of the student: "<<place[i]<<endl;
            cout<<"State of the student: "<<state[i]<<endl;
            cout<<"Roll no. of the student: "<<roll[i]<<endl;
            cout<<endl;
        }
    }
}

void search(){
    string rollno;
    cout<<"Enter the roll number of the student whose data you want to get: ";
    cin>>rollno;
    for(int i = 0;i<total;i++){
        if(rollno==roll[i]){
            cout<<"Data of student "<<i+1<<endl;
            cout<<"Name of the student: "<<name[i]<<endl;
            cout<<"Contact of the student: "<<contact[i]<<endl;
            cout<<"Place of the student: "<<place[i]<<endl;
            cout<<"State of the student: "<<state[i]<<endl;
            cout<<"Roll no. of the student: "<<roll[i]<<endl;
            cout<<endl;
        }
    }
}

void update(){
    string rollno;
    cout<<"Enter the data which you want to update: ";
    cin>>rollno;
    for(int i=0;i<total;i++){
        if(rollno==roll[i]){
            cout<<"Previous data "<<endl;
            cout<<"Data of student "<<i+1<<endl;
            cout<<"Name of the student: "<<name[i]<<endl;
            cout<<"Contact of the student: "<<contact[i]<<endl;
            cout<<"Place of the student: "<<place[i]<<endl;
            cout<<"State of the student: "<<state[i]<<endl;
            cout<<"Roll no. of the student: "<<roll[i]<<endl;
            cout<<endl;

            cout<<"Enter new data"<<endl;
            cout<<"Name of the student: ";
            cin>>name[i];
            cout<<"Contact of the student: ";
            cin>>contact[i];
            cout<<"Place of the student: ";
            cin>>place[i];
            cout<<"State of the student: ";
            cin>>state[i];
            cout<<"Roll no. of the student: ";
            cin>>roll[i];
        }
    }
}

void todelete(){
    int a;
    cout<<"Press 1 if you want tot delete the whole record"<<endl;
    cout<<"Press 2 if you want to delete the specific record"<<endl;
    cin>>a;

    if(a==1){
        total=0;
        cout<<"All record is deleted"<<endl;
    }
    else if(a==2){
        string rollno;
        cout<<"Enter the roll no whose record you want to delete"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++){
            if(rollno==roll[i]){
                for(int j=i;j<total;j++){
                    name[j]=name[j+1];
                    contact[j]=contact[j+1];
                    place[j]=place[j+1];
                    state[j]=state[j+1];
                    roll[j]=roll[j+1];
                }
                total--;
                cout<<"Your required data is deleted"<<endl;
            }
        }
    }
}

int main(){
    int val;
    while(true){
        cout<<"Enter 1 to enter the data"<<endl;
        cout<<"Enter 2 to show the data"<<endl;
        cout<<"Enter 3 to search the data"<<endl;
        cout<<"Enter 4 to update the data"<<endl;
        cout<<"Enter 5 to delete the data"<<endl;
        cout<<"Enter 6 to exit"<<endl;
        cin>>val;
        cout<<endl;
        
        switch(val){
            case 1:
            enter();
            break;
            case 2:
            show();
            break;
            case 3:
            search();
            break;
            case 4:
            update();
            break;
            case 5:
            todelete();
            break;
            case 6:
            exit(0);
            break;
            default:
            cout<<"Invalid"<<endl;
            break;
        }
    }
return 0;
}
