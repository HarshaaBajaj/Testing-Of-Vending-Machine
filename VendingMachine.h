class VendingMachine {

public:
	VendingMachine() ;
	int coin();
	int small_cup() ;
	int large_cup();
	int sugar();
	int tea();
	int insert_large_cups(int);
	int insert_small_cups(int);
	int set_price(int p);
	int cancel() ;
	int dispose() ;
	void displayState();
	void displayPrice();
	void displayTotalSmallCups();
	void displayTotalLargeCups();
	void displaySelection();


private:
int x;	
int price;	
int k;		
int k1;		
int t;		
int s;		

};