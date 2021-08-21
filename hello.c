// This programm is about Encrypt message;

#include <stdio.h>
#include <string.h>

int message_length(char message[1000]);
void encrypt(char message[1000]);
void encrypt_main_message(char message[1000]);

int main(){

	char message[1000];

	printf("Enter any message: ");
	fflush(stdout); // taking break for input;  
	gets(message);

	encrypt(message);
	printf("encrypt value = %s\n", message);

	encrypt_main_message(message);
	printf("Correct message = %s\n", message);

	return 0;
}

void encrypt(char message[1000]){

	int i,length;
	length = message_length(message);

	for(i = 0; i < length; i++){
		if( (message[i] >= 'a' && message[i] <= 'z') || (message[i] >= 'A' && message[i] <= 'Z') ){
			message[i] += 1;
		}
	}
}

int message_length(char message[1000]){

	int i = 0,length = 0;
	while(message[i] != '\0'){
		length++;
		i++;
	}
	return length;
}

void encrypt_main_message(char message[1000]){
	int i,length;
	length = message_length(message);

	for(i = 0; i < length; i++){
		if( (message[i] >= 'a' && message[i] <= '{') || (message[i] >= 'A' && message[i] <= '[') ){
			message[i] -= 1;
		}
	}
}