//nao consegui entender o que era pra fazer e nem como fazia pois voce nao chegou a explicar quase nada sobre esse assunto, espero que esteja certo:

bool converte(int valor_sensor, int valor_cor){
//nao entendi o que voce quis dizer com "diferença da linha branca para preta" entao vou considerar o "valor_cor" como um threshold, tudo que for acima branco, o que for abaixo preto.
if(valor_sensor>=valor_cor){
    return 0;
}
else{
    return 1;
}
}