//# include <reg52.h>
//# include "lcd.h"


///***********************************************************************/
//#define LCD_DATAPORT P0                           //Data Port P0
//sbit RW=P2^5;                                     //Read/Write Pin
//sbit RS=P2^6;                                     //Register select (Command or Data Register)
//sbit EN=P2^7;                                     //Enable Pin to latch Data

//sbit DB4=P0^4;                               
//sbit DB5=P0^5;
//sbit DB6=P0^6;
//sbit DB7=P0^7;

//void Delay (unsigned int value)        // 1ms * Value = X Delay
//{
// unsigned int j;
//	   
//	for (j=0; j<value ;j++)
//	{  
//		
//		TH1=0xFC;
//		TL1=0x19;
//		TF1=0;
//		TR1=1;
//		while(TF1==0);
//		TF1=0;
//		TR1=0;
//	}
//}

//	
///***********************************************************************/
// //LCD Write Function
//void LCD4_write ( unsigned char Value)
//  {  
//		//In this Case Byte are divide into two Nibbles,First low nibble is passed and then Highly Nibble is transfred
//		//Nibble are Anded(Gate) with pins with below mentioned Value(By making each pin High) One by one
//		
//		DB4=0x10 & Value;            //Value (Command Or Data are and with 0x10) first Pin          
//		DB5=0x20 & Value;            //Value (Command Or Data are and with 0x20) second Pin  
//		DB6=0x40 & Value;            //Value (Command Or Data are and with 0x40) Third Pin  
//		DB7=0x80 & Value;            //Value (Command Or Data are and with 0x80) Fourth Pin  
//		                //First Nibble Ready 
//		EN=1;                       //Enable High...
//	  Delay(4);                   //for 450ns to latch Data/Command and
//	  EN=0;                       //then make it low
//	 
//	}
//	
///***********************************************************************/
//// LCD Command Function
//void LCD_Command (unsigned char cmd)
//{ 
//	RS=0;                           //for command RS=0
//	RW=0;                           //for command RW=0
//	LCD4_write(cmd & 0xF0);         // First nibble Passed
//	LCD4_write( cmd <<4 );          //Shift first Nibble and Next will be Ready to pass
//}

///***********************************************************************/
//// LCD Data Functio
//void LCD_Data (unsigned char Data)
//{ 
//	RS=1;                          //for Data RS=1
//	RW=0;                          //for Data RS=1
//	LCD4_write ( Data & 0xF0);
//	LCD4_write (Data <<4 );
//	
//}

///***********************************************************************/
//// To Enter String
//void String_data (unsigned char *p)                //Pointer is used to passs the string to LCD
//{
//  
//	while(*p)                                        // P is a pointer which store the address of variable And *p show the value of pointer
//	{
//		LCD_Data(*p++);                               //Passing the Charchater one by one to LCD data Port
//	}

//}
///***********************************************************************/
//// Intilization OF LCD
//void LCD_Intialization(void)
//{  
//	                                         
//	 Delay(100);
//   LCD_Command(0x02);  //initilize the LCD in 4bit Mode
//   LCD_Command(0x28);
//   LCD_Command(0x0C);  // display ON cursor ON
//   LCD_Command(0x01);  // clear the LCD
//   LCD_Command(0x80);  // move the Cursor to First line First Position
//}

///***********************************************************************/
//// Set Cursor function (Enter the coloum and Row, the Cursor position is on that point)

// void Set_cursor(int row, int coloum)
// {      
//	 if(row==1)                                          //Row 1
//	    { 	LCD_Command(0x80+coloum); }                  //0x80(First Row first Display) + Desired Number of coloum position
//			else if(row==2)                                  //Row 2
//	    { 	LCD_Command(0xC0+coloum); }                  //0xC0(sercond Row first Display + Desired Number of coloum position)
// 
// 
// }


// 
// /***********************************************************************/
// int lcd_Pow(int X,int Y)
//{
//	unsigned char i;
//	int Result=1;
//	for(i=0;i<Y;i++)
//	{
//		Result*=X;
//	}
//	return Result;
//}

///**************************************************************************/

////***  TO change Integer Data Type into Charchater Data Type**
////Set Cursor, Passing Number and its Length,
//void LCD_ShowNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)
//{
//	unsigned char i;
//	Set_cursor(Line,Column);                     //Set cursor
//	for(i=Length;i>0;i--)                        //set the length, if Number is 1 and its lenght is 3, so on LCD Output is 001
//	{
//		LCD_Data(Number/lcd_Pow(10,i-1)%10+'0');   //take the modulos and convert into charachter 
//	}
//}

///*****************************************************************************************/
//void LCD_ShowChar(unsigned char Line,unsigned char Column,unsigned char Char)
//{
//	Set_cursor(Line,Column);
//	LCD_Data(Char);
//}

///****************************************************************************************/

//void LCD_ShowString(unsigned char Line,unsigned char Column,char *String)  /// show string on lcd
//{
//	unsigned char i;
//	Set_cursor(Line,Column);
//	for(i=0;String[i]!='\0';i++)
//	{
//		LCD_Data(String[i]);
//	}
//}

//void LCD_ShowFloat(float num, int decimalPlaces) 
//{ 
//	int intValue,factor,i,decimalInt,digit; 
//	float decimalPart;
//     
//		
//	  intValue = (int)num;
//     decimalPart = num - intValue;

//    // Display the integer part
//    LCD_ShowNum(1, 12, intValue, 1);

//    // Display the decimal point
//    LCD_ShowChar(1, decimalPlaces+12 , '.');

//    // Calculate the factor to convert decimal part to an integer
//     factor = 1;
//    for ( i = 0; i < decimalPlaces; i++) {
//        factor *= 10;
//    }

//    // Convert the decimal part to an integer
//     decimalInt = (int)(decimalPart * factor);

//    // Display the decimal part
//    for ( i = decimalPlaces; i > 0; i--) {
//         digit = decimalInt % 10;
//        LCD_ShowNum(1, decimalPlaces + 12+i , digit, 1);
//        decimalInt /= 10;
//    }
//		
//		
//		
//		
//		
//		
//		
//		
//		
//}