#include<iostream>
#include<process.h>
#include<graphics.h>
#include<conio.h>
#include<cstring>
#include<fstream>
#include<stdlib.h>
using namespace std;

class fee{
	public:
		void showBEfee(){
		cout<<"\nBE FEE :38500";	
		
			}
		void showBSfee(){
		cout<<"\n BS FEE :56000";
}
};
class BS:public fee{
         public:
         	int bs;
         	void showBS(){
         		cout<<" 1.BS English\n2. BS Computer science \n3.BS Mathematics \n\n";
	         }
         	void setBS(){
         		
         	               cin>>bs;
         	               
	         }
	void getBS(){
		if(bs==1)  cout<<" BS English:\nBS English is a specialized four year programme, tailored to implement HEC's proposed paradigm of learning, building a broad base by introducing students to a number of diverse fields such as Logic, Philosophy, Human Rights, Psychology and Business Administration, before immersing them in the specialized domain of English Literature,";
		if(bs==2)  cout<<" BS Computer science:\nThe Bachelor of Computer Science or Bachelor of Science in Computer Science is a type of bachelor's degree, usually awarded after three or four years of collegiate study in computer science, but possibly awarded in fewer years depending on factors such as an institution's course requirements and academic calendar.";
		if(bs==3)  cout<<" BS Mathamatics\nThe BS Mathematics assists students to enhance their quantitative skills which are highly valued as a mathematician. This degree prepares students for a career in the public and private sectors. ... Having equipped with such skills enable graduates to seek creative careers in applied science, physics, banking, etc.";
		fee::showBSfee();
	            }         
	            
	void showBSseats(){
		cout<<"SEATS\n BSEnglish= 5.\n BSComputersystem=3.\nBSMathematics=4\n";
	}
};
class field
{
	private:
		string seat;
		
	public:

	              void setseat(string st ){
	        	seat=st;
	        }
	        void chooseseat(){
	        	cout<<"\nenter first letterof your  field name";
	        	cin>>seat;
	        }
	        void totalfield(){
	        	cout<<"\n mechanical=5\ncivil=2\nsoftware=8\nelectrical=7\nelectronics=4\ncomputer system=5\nbiomedical=4\nmining=8\npetroleum and gas=2\nindustrial=6\nmtealluargy=6\nmechatronics=8.\n";
	        	
	        }
		            
};

class district{
	private:
		int s;
	public:
		void hyderabad(){
			cout<<"hyd";
		}
		void sanghar(){
			cout<<"sanghar";
		}
		
		void khairpur(){
			cout<<"khairpur";
		}
		
		
		void matiari(){
			cout<<"matiari";
		}
		
		void jamshoro(){
			cout<<"jamshoro";
	}
		
		void kotri(){
			cout<<"kotri";
		}
		
		void tandoalhayar(){
			cout<<"tandoalhay";
		}
		
		void sukkar(){
			cout<<"sukkar";
		}
		
		void umerkot(){
			cout<<"umerkot";
		}
		
		void ghotki(){
			cout<<"ghotki";
		}
		
		void kashmir(){
			cout<<"kashmir";
		}
		
		void sahiwal(){
			cout<<"sahiwal";
		}
		
		void mirpurkhas(){
			cout<<"mirpurkhas";
		}
		
		void thatta(){
			cout<<"thatta";
		}
		void tharparkar(){
			cout<<"tharparkar";
		}
		void setdistrict(int select){
		s=select;
		}
		void showdistrict(){
			cout<<"\n\n1.hyderabad\n2.jamshoro\n3. sahiwal\n4.matiari\n5.kotri\n6.tandoalhar\n7.mirpurkhas\n8.khairpur\n9.sukkar\n10.sanghar\n11.ghotki\n12.tharpharkar\n13.umerkot\n14.kashmir:";
		}
			void selectdistrict(){
				cout<<"enter above number for get more more inforation about your district";
				cin>>s;
			}
		void showyourdistrict(){
			if(s==1)
			hyderabad();	
			
			if(s==2)
				jamshoro();
			
			
			if(s==3)
			sahiwal();
			
			
			if(s==4)
			matiari();
			
			
			if(s==5)
			kotri();
			
			
			if(s==6)
			tandoalhayar();
			
			
			if(s==7)
			mirpurkhas();
			
			
			if(s==8)
			khairpur();
			
			
			if(s==9)
		                sukkar();
			
			if(s==10)
			sanghar();	
			
			if(s==11)
			ghotki();	
			
			if(s==12)
			tharparkar();	
			
			if(s==13)
			umerkot();	
			
			if(s==14)
			kashmir();	
			
		}
			};
class categoryA:public fee{
	private:
		int num;
	public:
		void setnumA(int n){
			num=n;
			fee::showBEfee();
		}
		
void civil(){
	cout<<"civil enginnering\nCivil engineering is a professional engineering discipline that deals with the design, construction, and maintenance of the physical and naturally built environment, including public works such as roads, bridges, canals, dams, airports, sewerage systems, pipelines, structural components of buildings, and railways.";
}
void electrical(){
	cout<<"electrical enginnering: \nElectrical engineering is one of the newer branches of engineering, and dates back to the late 19th century. It is the branch of engineering that deals with the technology of electricity. Electrical engineers work on a wide range of components, devices and systems, from tiny microchips to huge power station generators.";}
	
void mechanical(){
	cout<<"mechanical enginnering:\nMechanical engineering is the study, design, development, construction, and testing of mechanical and thermal sensors and devices, including tools, engines, and machines. ... Mechanical engineers work mostly in engineering services, research and development, and manufacturing.";}
void electronics(){
	cout<<"electronics enginnering:\nElectronic engineering (also called electronics and communications engineering) is an electrical engineering discipline which utilizes nonlinear and active electrical components (such as semiconductor devices, especially transistors and diodes) to design electronic circuits, devices, integrated circuits ";}
void showfieldsA(){
	cout<<"category A\n";
	cout<<"\n1.civil enginnering\n";
	cout<<"2.mechanical enginnering\n";
	cout<<"3.electrical enginnering\n";
	cout<<"4.electronics enginnering\n";}	
	void getnumA(){
		cin>>num;
	}
	void showA(){
	cout<<"\nenter above number to know more about your fields\n";       	cin>>num;
	if(num==1)
               civil();
	 if(num==2)
               mechanical();
	 if(num==3)
	electrical();
	 if(num==4)
	electronics();
 

	}
};
class categoryB:public fee{
	private:
		int numb;
	public:
		void setnumB(int nb){
			numb=nb;
			fee::showBEfee();
		}
void software(){
	cout<<"software enginnering :\nSoftware engineering is a technical STEM field that's focused on developing computer products. The opposite of hardware, software is any coded program that controls computer functions. Operating systems, word processors, apps, and games fall into the software category.";
}
void biomedical(){
	cout<<"bimedical enginnering:\nBiomedical engineering (BME) or medical engineering is the application of engineering principles and design concepts to medicine and biology for healthcare purposes (e.g., diagnostic or therapeutic). BME is also traditionally known as bioengineering, but this term has come to also refer to biological engineering.";}
	
void computersystem(){
	cout<<"computer system enginnering:\nComputer Engineering is the branch of engineering which integrates electronic engineering with computer sciences. It deals with the design and utilization of computing systems for Industrial Automation, Robotics, Multimedia and Artificial Intelligence.";}
void petroleum_and_gas(){
	cout<<"petroleum and gas enginnering:\nPetroleum engineering is a field of engineering concerned with the activities related to the production of Hydrocarbons, which can be either crude oil or natural gas. Exploration and production are deemed to fall within the upstream sector of the oil and gas industry.";}
void showfieldsB(){
	cout<<"category B\n";
	cout<<"\n1.sofware enginnering\n";
	cout<<"2.biomedical enginnering\n";
	cout<<"3. computer system engineering\n";
	cout<<"4.petroleum and gas engineering\n";
	}	
	void showB(){
	cout<<" \nenter above mention to know about your field\n";
	cin>>numb;
	if(numb==1)
               software();
	 if(numb==2)
               biomedical();
	 if(numb==3)
	computersystem();
	if(numb==4)
	petroleum_and_gas();
	}
	};
class categoryC:public fee{
	private:
		int numc;
	public:
		void setnumC(int nc){
			numc=nc;
			fee::showBEfee();
		}
void mining(){
	cout<<"mining enginnering:\n Mining Engineering is an engineering discipline that involves the science, technology and application of extracting and processing minerals from a natural environment. ... These include geology, civil and mechanical engineering, metallurgy, commerce, economics, management, law and information technology.";
}
void industrial(){
	cout<<"industrial enginnering:\n Industrial engineering is an engineering profession that is concerned with the optimization of complex processes, systems, or organizations by developing, improving and implementing integrated systems of people, money, knowledge, information and equipment.";}
	
void metalluargy(){
	cout<<" metaullargy enginnering:\nMetallurgy and Materials Engineering is the science and technology of producing, processing and giving proper shape to metals and alloys and other Engineering Materials having desired properties through economically viable process.";}
void chemical(){
	cout<<"chemical engineering:\n";}
void showfieldsC(){
	cout<<"category C\n";
	cout<<"\n1.mining enginnering\n";
	cout<<"2.industrial enginnering\n";
	cout<<"3.metalluargy enginnering\n";
	cout<<"4.chemical enginnnering\n";}	
	void showC(){
	cout<<" \nenter above mention to know more about your field\n";
	cin>>numc;
	if(numc==1)
               mining();
	 if(numc==2)
               industrial();
	 if(numc==3)
	metalluargy();
	if(numc==4)
	chemical();
	}
	};

class intro{
	private:
	   
	   int num;
	   float pi;
	   float pm;
	   float cpn;
	 public:
	    void setintro(string n,int nu,float perin,float permat,float result){
	    	//name=n;
	    	num=nu;
	    	pi=perin;
	    	pm=permat;
	    	cpn=result;
		       }	
	  void getintro(){
	    	cout<<"\nwhat your scores in entry test?\n"<<endl;
	    	cin>>num;

	    	cout<<"what's your percentage in intermediate?\n"<<endl;
	    	cin>>pi;
	    	cout<<"what's your percentage in matriculation ?\n"<<endl;
	    	cin>>pm;
	    }
                            void calculate_cpn(){
		    
	    	cpn=(0.6*num)+(0.3*pi)+(0.1*pm);
	    	}
	    	
	    float show_cpn(){
	    	return  cpn;
	    }
	    }; 

	void starline(){
	for(int i=1;i<120;i++)
	cout<<"*";
}
int main(){
		string finish_BSseat;
	string seats_finish;
	string name;
	string cot;
	string cotb;
	string BSseat;
	int seatsBSenglish=5;
	int seatsBSmathematics=3;
	int seatsBScomputerscience=7;
    string bb;
	string seats;
	int seatscivil=2;
	int seatssoftware=8;
	int seatsmining=8;
	int seatselectrical=7;
	int seatselectronics=4;
	int seatspetroleumandgas=2;
	int seatsmetalluargy=6;
	int seatsindustrial=6;
	int seatsmechatronics=8;
	int seatsbiomedical=4;
	int seatscomputersystem=5;
	int seatsmechanical=5;
	char y;
    char st;
    string seat;
	int s;
	int numc;
	char category;
	int numb;
	string available;
	char ch2;
	int num2;
	char ch3;
	int num3;
	string option;
	char d;
	int bs;
	char ch;
	int num;
	float c;
	fee f1;
	field stu1;
	district dist;
	intro p1;
	categoryB b;
	categoryA a;
	categoryC c1;
                
	char ap;
	int i=0;
//	string search;
	long sno;
	string fname;
	string studdistrict;
int form =1;
	string pass ="";
   char pch;
   cout<<" UNIVERSITY ADMISSION FORM";
   cout << "\n\n\nEnter password\n";
   pch = _getch();
   while(pch != 13){//character 13 is enter
      pass.push_back(pch);
      cout << '*';
      pch = _getch();
   }
   if(pass == "kashaf"){
      cout << "\nAccess granted :P\n";
   }else{
      cout << "\nAccess aborted...\n";
      exit(0);
}
        starline();
        cout<<"\n\nSEATS :";
	   	cout<<"\n\nBE SEATS\n mechanical=5\ncivil=2\nsoftware=8\nelectrical=7electronics=4\ncomputer system=5\nbiomedical=4\nmining=8\npetroleum and gas=2\nindustrial=6\nmtealluargy=6\nmechatronics=8.\n";
        cout<<"\n\nBS SEATS\n BSEnglish= 5.\n BSComputersystem=3.\nBSMathematics=4\n\n\n";
        starline();
    //    system("cls");
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	for(int i=1;i<1400;i++){
		delay(10);
	circle(70+i,200,150);
     setcolor(0);
     setbkcolor(5);
    settextstyle(BOLD_FONT,HORIZ_DIR,10);
    outtextxy(10,400,"MUET ADDMISSION FORM");
	setcolor(6);
	setbkcolor(4);
    settextstyle(BOLD_FONT,HORIZ_DIR,15);
	outtextxy(80,200,"MEHRAN UNIVERSITY");}
	setcolor(0);
	setbkcolor(2);
	settextstyle(BOLD_FONT,HORIZ_DIR,5);
	outtextxy(250,600,"WELCOME TO MUET");
	getch();
	closegraph();
	
   	
do
	{
			if(form==1){
				system("Color 0A");
			}
			if(form==2){
				system("Color DE");
			}
			if(form==3){
				system("Color 0D");
			}
			if(form==4){
				system("Color A5");
			}
     	if(form==5){
			system("Color 16");	}
			if(form==6){
				system("Color 0A");
			}
			if(form==7){
				system("Color DE");
			}
			if(form==8){
				system("Color 7E");
			}
			if(form==9){
				system("Color A5");
			}
     	starline();	
       cout<<"\n\n\t\t\t\t\tWELCOME TO MUET FIELD SELECTION  WEBSITE\n\n";
       starline();
       cout<<"\n form number          :"<<form;

       cout<<"\n enter your seat no   :";
       cin>>sno;
       cout<<"\n enter name           :";
       cin>>name;
       cout<<"\n father name           :";
       cin>>fname;
       cout<<"\n enter your district  :";
       cin>>studdistrict;
	   p1.getintro();
       
       p1.calculate_cpn();
       cout<<"\n your cpn is          :"<<p1.show_cpn();
       
        cout<<"\n";
       cout<<"\nwhat do do you want to do    BE  OR   BS \n press BE for Bachelor of  Engineering and press   BS  for   Bachelor of Science";
       cin>>bb;
       if(bb=="BE"){
       	cout<<"\nBachelor of  Engineering\n";
       	
       }
       if(bb=="BS"){
       	cout<<"\nBachelor of Science\n";
       }
       if(bb=="BE"){
       cout<<"\nWhich category fieldsdo you want to see A  B C";
       cin>>category;
       if(category=='A'){
         categoryA a;
       a.showfieldsA();
       a.setnumA(num);
       cout<<endl;
       a.showA();}
       if(category=='B'){
       
       categoryB b;
       b.showfieldsB();
       b.setnumB(numb);
       cout<<endl;
       b.showB();}
       if(category=='C'){
       
       c1.showfieldsC();
       c1.setnumC(numc);
       cout<<endl;
       c1.showC();
cout<<endl;}
cout<<"\n\n\t\t\tselect your district   :";

dist.setdistrict(s);
dist.showdistrict();

dist.selectdistrict();
dist.showyourdistrict(); 
cout<<"\n\n\t\tselect your field       :";
cout<<"\n";
field stu1;
stu1.setseat(seat);

fee f1;
if(seatscivil==2&&seatssoftware==8&&seatsmechanical==5&&seatselectronics==4&&seatsmining==8&&seatsmechatronics==8&&seatsindustrial==6&&seatsmetalluargy==6&&seatsbiomedical==4&&seatscomputersystem==5&&seatspetroleumandgas==2)
cin>>seats;
else{

cout<<".";
	cin>>seats_finish;
}

if(seats=="civil"||seats_finish=="civil"){	        

                              seatscivil=seatscivil-1;
		cout<<seatscivil;
	        }
		        
		        if(seats=="software"||seats_finish=="software"){
		     
		        	seatssoftware=seatssoftware-1;
		        }
		        if(seats=="electrical"||seats_finish=="electrical"){

		             	seatselectrical=seatselectrical-1;
		        }
		        if(seats=="electronics"||seats_finish=="elctronics"){
		              	seatselectronics=seatselectronics-1;
		        	
		        }
		        
		        if(seats=="mechanical"||seats_finish=="mechanical")
		        {
		             	seatsmechanical=seatsmechanical-1;
		        }
		        if(seats=="computersystem"||seats_finish=="computersystem")
		        {
		              	seatscomputersystem=seatscomputersystem-1;
		        }
		        
		        if(seats=="biomedical"||seats_finish=="biomedical")
		        {
		             	seatsbiomedical=seatsbiomedical-1;
		        }
		        
		        if(seats=="mining"||seats_finish=="mining")
		        {
		        	
		        	seatsmining=seatsmining-1;
		        }
		        
		        if(seats=="pg"||seats_finish=="pg")
		        {
		              	seatspetroleumandgas=seatspetroleumandgas-1;
		        
		        }

		        
		        if(seats=="industrial"||seats_finish=="industrial")
		        {

		        	seatsindustrial=seatsindustrial-1;
		        	f1.showBEfee();
		        }
		        
		        if(seats=="metalluargy"||seats_finish=="metalluargy")
		        {
		             	seatsmetalluargy=seatsmetalluargy-1;
		        }
		           
		        if(seats=="mechatronics"||seats_finish=="mechatronics")
		        {
		             	seatsmechatronics=seatsmechatronics-1;
		      	
	}

cout<<endl;	
if(seatscivil>=1){
cout<<" SEATS"<<"\n CIVIL  :"<<seatscivil;}
if(seatscivil<0||seatscivil==0){
	cout<<" SEATS"<<"\n CIVIL  =  not available\n";
}
if(seatssoftware>=1){
cout<<" SEATS"<<"\n SOFTWARE  :"<<seatssoftware;}
if(seatssoftware<0||seatssoftware==0){
	cout<<" SEATS"<<"\n SOFTWARE  =  not available\n";
}
if(seatsmining>=1){
cout<<" SEATS"<<"\n     MINING  :"<<seatsmining;}
if(seatsmining<0||seatsmining==0){
	cout<<" SEATS"<<"\n MINING  =  not available\n";
}

if(seatselectrical<0||seatselectrical==0){
cout<<" SEATS"<<"\n     ELECTRICAL  =not available\n";}
if(seatselectrical>=1){
cout<<" \n ELECTRICAL  ="<< seatselectrical;}

if(seatselectronics>=1){
cout<<"   \n ELECTRONICS  :"<<seatselectronics;}
if(seatselectronics<0||seatselectronics==0){
cout<<" \n ELECTRNICS  ="<< "no available\n";}

if(seatspetroleumandgas<0||seatspetroleumandgas==0){
cout<<"  \nPG  =   not available\n";}
if(seatspetroleumandgas>=1){
cout<<" \n PETROILEUM AND GAS  ="<<seatspetroleumandgas;}
if(seatsmetalluargy>=1){

cout<<" \n METALLUARGY  ="<<	 seatsmetalluargy;}
if(seatsmetalluargy<0||seatsmetalluargy==0){

cout<<" \n METALLUARGY  = not available\n";}
if(seatsindustrial>=1){

 cout<<"\n INDUSTRIAL  ="<<seatsindustrial;}
 if(seatsindustrial<0||seatsindustrial==0){
 	cout<<"\n INDUSTRIAL  = not available\n";
 }
 if(seatsmechatronics>=1){
cout<<"\n MECHATRONICS ="<< seatsmechatronics;}

 if(seatsmechatronics<0||seatsmechatronics==0){
cout<<"\n MECHATRONICS =  not available\n";}
if(seatsbiomedical>=1){
cout<<" \n BIO MEDICAL  ="<< seatsbiomedical;}
if(seatsbiomedical<0||seatsbiomedical==0){
cout<<" \n BIO MEDICAL  = not available\n";}
if(seatscomputersystem>=1){
cout<<" \n COMPUTER SYSTEM  ="<<seatscomputersystem;}

if(seatscomputersystem<0||seatscomputersystem==0){
cout<<" \n COMPUTER SYSTEM  = not available\n";}
if(seatsmechanical>=1){
cout<<"\n MECHANICAL  ="<< seatsmechanical;}
if(seatsmechanical<0||seatsmechanical==0){
cout<<"\n MECHANICAL  = not avAailable";}
if(seatsmechanical<0||seatscivil<0||seatssoftware<0||seatselectrical<0||seatselectronics<0||seatscomputersystem<0||seatsbiomedical<0||seatsindustrial<0||seatspetroleumandgas<0||seatsmining<0||seatsmetalluargy<0||seatsmechatronics<0){
	cout<<"\n COT ";
	cout<<"\n name the seat";
	cin>>cot;}
}

BS b;
if(bb=="BS"){
b.showBS();
b.setBS();
b.getBS();

cout<<"\n\t\t\tselect your district\t\t\n";
district dist;
dist.setdistrict(s);
dist.showdistrict();
fee f1;
dist.selectdistrict();
dist.showyourdistrict();
b.showBSseats();
if(seatsBSenglish==5&&seatsBSmathematics==4&&seatsBScomputerscience==3)
cin>>BSseat;
else
cin>>finish_BSseat;
if(BSseat=="BSENG"||finish_BSseat=="BSENG"){
	seatsBSenglish=seatsBSenglish-1;
	cout<<seatsBSenglish;
}
if(BSseat=="BSMATHS"||finish_BSseat=="BSMATHS"){
	seatsBSmathematics=seatsBSmathematics-1;	
	cout<<seatsBSmathematics;
	
}

if(BSseat=="BSCS"||finish_BSseat=="BSCS"){
	seatsBScomputerscience=seatsBScomputerscience-1;
	
}
if(seatsBSmathematics>=1){
cout<<" \nSEATS"<<"\n BSMathematics ="<<seatsBSmathematics;}
if(seatsBSmathematics==0||seatsBSmathematics<0){
	cout<<"\n BSMathematics =  not available";
}
if(seatsBSenglish>=1){
cout<<"\n BSEnglish  ="<< seatsBSenglish;}
if(seatsBSenglish==0||seatsBSenglish<0){
cout<<"\n BSEnglish  = not available";
}
if(seatsBScomputerscience>=1){

cout<<"\n BSComputer science ="<<seatsBScomputerscience;
}
if(seatsBScomputerscience==0||seatsBScomputerscience<0){
cout<<"\n BSComputer science = not available";	
}
if(seatsBScomputerscience<1||seatsBSenglish<1||seatsBSmathematics<1){
	cout<<" \nenter any field for COT ";
	cin>>cotb;}
}
cout<<" \n\n\t\t student data saved in file\t\t\t";
if(bb=="BS"){
	ofstream out2;
	out2.open("PROJECT_FORMBS.TXT",ios::app);
out2<<"\n NAME          : "<<name;
out2<<"\n CPN           : "<<p1.show_cpn();
out2<<"\n SEAT NO       : "<<sno;
if(seatsBSenglish==5||seatsBSmathematics==4||seatsBScomputerscience==3)
out2<<"\n SELECTED SEAT : "<<BSseat;
else

out2<<"\n SELECTED SEAT : "<<finish_BSseat;
if(seatsBScomputerscience<1||seatsBSenglish<1||seatsBSmathematics<1)
cout<<"\n COT           :"<<cotb;
out2<< endl;
out2.close();	
}

if(bb=="BE"){
ofstream out;
out.open("PROJECT_FORMBE.txt",ios::app);
out<<"\n  NAME              : "<<name;
out<<"\n  CPN               : "<<p1.show_cpn();
out<<"\n SEAT NO            : "<<sno;
if(seatscivil==1&&seatssoftware==8&&seatsmechanical==5&&seatselectronics==4&&seatsmining==8&&seatsmechatronics==8&&seatsindustrial==6&&seatsmetalluargy==6&&seatsbiomedical==4&&seatscomputersystem==5&&seatspetroleumandgas==2)
out<<"\n  SELECTED SEAT     : "<<seats;
else
//else if(seatscivil==1||seatssoftware==7||seatsmechanical==4||seatselectronics==3||seatsmining==7||seatsmechatronics==7||seatsindustrial==5||seatsmetalluargy==5||seatsbiomedical==3||seatscomputersystem==4||seatspetroleumandgas==1)
//out<<"\n  SELECTED SEAT     : "<<seats;
out<<"\n SELECTED SEAT      :"<<seats_finish;
if(seatsmechanical<0||seatscivil<0||seatssoftware<0||seatselectrical<0||seatselectronics<0||seatscomputersystem<0||seatsbiomedical<0||seatsindustrial<0||seatspetroleumandgas<0||seatsmining<0||seatsmetalluargy<0||seatsmechatronics<0)	
out<<"\n COT                :"<<cot;
out<< endl<<"\n";
out.close();
cout<<endl;
}

cout<<" \n\n Your Form is ready now you can get your addmission form ";
ofstream out;
out.open("PROJECT_FORMBEBS.txt",ios::app);

out<<"\n\t\t\t Mehran University Of Engineering & Technology ,Jamshoro\n";
out<<"\t\t\t\t     addmission session\n";
out<<"\t\t\t\t    jamshoro-sind,Pakistan\n";
out<<"\t\t\t\t  www.addmissions.muet.edu.pk\n";
out<<"\nName in full      :\t\t\t"<<name;
out<<"\nFather name       :\t\t\t"<<fname;
out<<"\nDistrict          :\t\t\t"<<studdistrict;
out<<"\nseat number       :\t\t\t"<<sno;
out<<"\n\nCONGRATULATIONS\n\n";
out<<"You have been probably selected for addmission "<<bb<<" in first year class for\n academic session(2020-21) under regular scheme in the terms and condtion as follow\n";
out<<"\nDiscipline Awarded  :\t\t\t"<<seat;
out<<"\nPlace of study    :\t\t\t"<<"Jamshoro";
out<<"\nFather Name       :\t\t\t"<<fname;
if(seatsmechanical<0||seatscivil<0||seatssoftware<0||seatselectrical<0||seatselectronics<0||seatscomputersystem<0||seatsbiomedical<0||seatsindustrial<0||seatspetroleumandgas<0||seatsmining<0||seatsmetalluargy<0||seatsmechatronics<0)	
out<<"\nMy further and final choice sas under\n\n"<<cot;
out<<"\n\n\t\t\t\t\t\tSignature of Candidate";
out<<"\n\n";
out<<"************************************************************************************************************************************";
out.close();

cout<<"\nFOR ANOTHER STUDENT PRESS E/e";
cin>>y;
cout<<"\n\n";
starline();
cout<<"\n\n";
form++;

}  
while(y=='e'||y=='E');
cout<<" \n\tTHANKYOU FOR VISITING OUR WEBSITE\t\n";
starline();
return 0;
}





