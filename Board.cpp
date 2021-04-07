#include "Board.hpp"
#include <string>
#include "Direction.hpp"
#include <iostream>
using namespace std;

namespace ariel{

void Board::post(unsigned int row,unsigned int col,ariel::Direction dir,string str_in){
if(x_min>col){
	x_min=col;
}
if(y_min>row){
	y_min=row;
}

if(dir==ariel::Direction::Vertical){
	if(y_max<row+str_in.length()){
		y_max=row+str_in.length();
	}
	for(unsigned int i=row; i<row+str_in.length(); i++){
		board[i][col]=str_in[i-row];

	}
}else{
		if(x_max<col+str_in.length()){
		x_max=col+str_in.length();
	}
	for(unsigned int j=col; j<col+str_in.length(); j++){
		board[row][j]=str_in[j-col];

	}
}
}


string Board::read(unsigned int row,unsigned int col,ariel::Direction dir,unsigned int num_of_letters){
	if(num_of_letters==0){
		return "";
	}
	string str;
	if(dir==ariel::Direction::Vertical){
		for(unsigned int i=row; i<row+num_of_letters; i++){
			if(board.find(i)==board.end()||board[i].find(col)==board[i].end()){
			str+="_";
			}
			else{
			str+=board[i][col];
			}
		}
}else{
	  for(unsigned int j=col; j<col+num_of_letters; j++){
		  if(board.find(row)==board.end()||board[row].find(j)==board[row].end()){
			  str+="_";
		  }
		  else{
	  	  str+=board[row][j];
      
	  	}
	  }
   }
   return str;
}


 void Board::show(){
	 for(unsigned int i=y_min; i<=y_max; i++){
		 std::cout<<endl;
		 for(unsigned int j=x_min; j<= x_max; j++){
			  if(board.find(i)==board.end()||board[i].find(j)==board[i].end()){
			        std::cout<<"_";
		    }else{
			        std::cout<<board[i][j];
	    	}
		 }
	 }
 }
};












