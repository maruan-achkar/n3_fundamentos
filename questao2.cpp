//nao consegui entender o que era pra fazer e nem como fazia pois voce nao chegou a explicar quase nada sobre esse assunto, espero que esteja certo:

float main(){
    int valor_sensor[6]; //valor da leitura do sensor. valido para um robo com 7 sensores.
    int maior;
    int menor;
    float media;
    int i;
    int temp;

for(i=0; i<=6; i++){
    if(valor_sensor[i]>maior){
        maior = valor_sensor[i];
    }
    if(valor_sensor[i]<menor){
        menor = valor_sensor[i];
    }}

    temp = maior + menor;
    media = temp/2;

    return media;
}