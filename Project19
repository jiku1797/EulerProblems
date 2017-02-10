/*
  The task is to count the number of Sundays during the 20th century (1901-2000).
  My solution does not make use of any Java date methods. 
*/

import java.lang.Math;

public class Date{
	private int day; //Monday represented by 1, Tuesday by 2 etc.
  	private int month;
  	private int year;
  
  //Constructor sets the given basic date
  public Date(){	//7th of January year 1900 was a Sunday
  	this.day = 7;
    this.month = 1;
    this.year = 1900;
  }

  public int getDay(){
  	return this.day;
  }
  
  public int getMonth(){
  	return this.month;
  }
  
  public int getYear(){
  	return this.year;
  }
  
  public void incrementWeek(){
  	day+=7;
    if(day>daysInMonth()) {
       	day = day-daysInMonth();
    	incrementMonth();
    }
  }
  
  private void incrementMonth() {
  	month++;
    if(month>12){
     	month=month-12;
        year++;
   	}
  }
  
  public int daysInMonth(){
    if(this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11){
    	return 30;
    }
    else if(month == 2){
      if(isLeapYear(this.year)){
    	return 29;
      }
      else{
      	return 28;
      }
    }
    else return 31;
  }
  
  public boolean isLeapYear(int year){
    if(year % 4 == 0){
      if((year % 100 == 0) && (year % 400 !=0) ){
      	return false;
      }
    	return true;
    }
    else return false;
  } 
  
  //Running the program
  public static void main(String[] args){
	  Date date = new Date();
	  int sundays = 0;
    
	  while(date.getYear() < 2001){
      		date.incrementWeek();
      		if(date.getDay() == 1 && date.getYear() > 1900) sundays++;
	  }
	  System.out.println("There were " + sundays + " number of Sundays on "
	  		+ "the 1st during the 20th century.");
  }
}
