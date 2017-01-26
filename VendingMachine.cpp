#include<iostream>
#include "VendingMachine.h"

using namespace std;

VendingMachine::VendingMachine() {
	k1=0;
	k=0;
	t=0;
	price=0;
	x=1;
}


int VendingMachine::coin() {
	if (x==1) {
		if ((t+25>=price)&&(price>0)) {
			s=0;
			t=0;
			x=2;
			return 1;
		}
		else if(t+25<price) {
			t=t+25;
			return 1;
		}
	}
	else if ((x>1)&&(x<6)) {
		cout<<"RETURN COIN"<<endl;
		return 1;
	}
	return 0;
}


int VendingMachine::small_cup() {
	if ((x==2)||(x==3)) {
		s=2;
		return 1;
	}
	return 0;
}

int VendingMachine::large_cup() {
	if ((x==2)||(x==3)) {
		s=1;
		return 1;
	}
	return 0;
}

int VendingMachine::sugar() {
	if ((x==2)||(x==3)) {
		if(x==2) x=3;
		else x=2;
		return 1;
	}
	return 0;
}


int VendingMachine::tea() {
	if ((x==2)||(x==3)) {
		if((x==2)&&(k1>1)&&(s==2)) {
			cout<<"DISPOSE SMALL CUP OF TEA"<<endl;
			k1=k1-1;
			x=1;
			return 1;
		}
		else if ((x==2)&&(k>1)&&(s==1)) {
			cout<<"DISPOSE LARGE CUP OF TEA"<<endl;
			k=k-1;
			x=1;
			return 1;
		}
		else if ((x==2)&&(k==1)&&(s==1)) {
			cout<<"DISPOSE LARGE CUP OF TEA"<<endl;
			k=k-1;
			x=5;
			return 1;
		} 
		else if ((x==2)&&(k1==1)&&(s==2)) {
			cout<<"DISPOSE SMALL CUP OF TEA"<<endl;
			k1=k1-1;
			x=4;
			return 1;
		}
		else if ((x==3)&&(k1==1)&&(s==2)) {
			cout<<"DISPOSE SMALL CUP OF TEA WITH SUGAR"<<endl;
			k1=k1-1;
			x=4;
			return 1;
		}
		else if ((x==3)&&(k==1)&&(s==1)) {
			cout<<"DISPOSE LARGE CUP OF TEA WITH SUGAR"<<endl;
			k=k-1;
			x=5;
			return 1;
		} 
		if((x==3)&&(k1>1)&&(s==2)) {
			cout<<"DISPOSE SMALL CUP OF TEA WITH SUGAR"<<endl;
			k1=k1-1;
			x=1;
			return 1;
		}
		else if ((x==3)&&(k>1)&&(s==1)) {
			cout<<"DISPOSE LARGE CUP OF TEA WITH SUGAR"<<endl;
			k=k-1;
			x=1;
			return 1;
		}
		return 0;
	}
	return 0;
}

int VendingMachine::insert_large_cups(int n) {
	if ((x==1)&&(n>0)) {
		k=k+n;
		return 1;
	}
	else if ((x==5)&&(n>0)) {
		k=n;
		x=1;
		return 1;
	}
	return 0;
}

int VendingMachine::insert_small_cups(int n) {
	if ((x==1)&&(n>0)) {
		k1=k1+n;
		return 1;
	}
	else if ((x==4)&&(n>0)) {
		k1=n;
		x=1;
		return 1;
	}
	return 0;
}

int VendingMachine::set_price(int p) {
	if ((x==1)&&(p>0)) {
		price=p;
		return 1;
	}
	return 0;
}


int VendingMachine::cancel() {
	if ((x==2)||(x==3)) {
		cout<<"RETURN COINS"<<endl;
		x=1;
		return 1;
	}
	return 0;
}

int VendingMachine::dispose() {
	if ((x==1)) {
		cout<<"SHUT DOWN"<<endl;
		x=6;
		return 1;
	}
	return 0;
}

void VendingMachine::displayState() {
switch(x)
	{
	case 1 : cout<<"State idle"<<endl;
		break;

	case 2 : cout<<"State coins inserted"<<endl;
		break;

	case 3 : cout<<"State sugar"<<endl;
 		break;

	case 4 : cout<<"State no small cups"<<endl;
		break;
	case 5 : cout<<"State no large cups"<<endl;
		break;
	}
};	

void VendingMachine::displayPrice() {
cout<<"Price : "<<price<<"t:"<<t<<endl;
};

void VendingMachine::displayTotalSmallCups() {
cout<<"Total Small Cups : "<<k1<<endl;
};

void VendingMachine::displayTotalLargeCups() {
cout<<"Total Large Cups : "<<k<<endl;
};


void VendingMachine::displaySelection() {
cout<<"Selected cup : "<<s<<endl;
}

