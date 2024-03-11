/*Declaração das variáveis / 
numéros Reais*/
float sal, novosal;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000); //Espera estratégica

}

void loop() {
  Serial.print("Digite sal: ");
  //le o valor do serial e guarda na variavel sal
  sal = aguardeEntrada();
  Serial.println(sal);

  //Calculo do novosal:
  novosal = (sal + (sal * 25/100));

  Serial.print("novosal: ");
  Serial.println(novosal);
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