/*Declaração das variáveis / 
numéros Reais*/
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000); //Espera estratégica

}

void loop() {
  Serial.print("Digite a nota 1: ");

  while(Serial.available() == 0){
    //Aguarda a entrada de valores do usuário
  }
  
  //le o valor do serial e guarda na variavel nota1
  nota1 = Serial.parseFloat();
  Serial.println(nota1);

  Serial.print("Digite a nota2:");
 while (Serial.available() == 0){
  //Aguarda a entrada da nota 2
 }

 nota2 = Serial.parseFloat();
 Serial.println(nota2);

  Serial.print("Digite a nota3:");
 while (Serial.available() == 0){
  //Aguarda a entrada da nota 3
 }

 nota3 = Serial.parseFloat();
 Serial.println(nota3);


  //Atribuição dos pesos
  Serial.print("Digite o peso 1:");
  while(Serial.available() == 0){
    //Aguarda a entrada do peso 1
  }
peso1 = Serial.parseFloat();
 Serial.println(peso1);

  
   Serial.print("Digite o peso 2:");
  while(Serial.available() == 0){
    //Aguarda a entrada do peso 2
  }
peso2 = Serial.parseFloat();
 Serial.println(peso2);


 Serial.print("Digite o peso 3:");
  while(Serial.available() == 0){
    //Aguarda a entrada do peso 3
  }
peso3 = Serial.parseFloat();
 Serial.println(peso3);


  //Calculo da media ponderada:
  media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);

  Serial.print("Media ponderada: ");
  Serial.println(media);
  delay(1000);
  
}

//criando uma função chamada
float aguardeEntrada(){
   while(!Serial.available()){
    //Aguarda até que um valor seja digitado
   }


  //retornar o valor digitado no serial em tipo floar
  return Serial.parseFloat();
}
 