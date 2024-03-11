/*Declaração das variáveis / 
numéros Reais*/
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000);  //Espera estratégica
}

void loop() {
  Serial.print("Digite a nota 1: ");
  //le o valor do serial e guarda na variavel nota1
  nota1 = aguardeEntradaNumerica();
  Serial.println(nota1);

  Serial.print("Digite a nota2:");

  nota2 = aguardeEntradaNumerica();
  Serial.println(nota2);

  Serial.print("Digite a nota3:");


  nota3 = aguardeEntradaNumerica();
  Serial.println(nota3);


  //Atribuição dos pesos
  Serial.print("Digite o peso 1:");

  peso1 = aguardeEntradaNumerica();
  Serial.println(peso1);


  Serial.print("Digite o peso 2:");

  peso2 = aguardeEntradaNumerica();
  Serial.println(peso2);


  Serial.print("Digite o peso 3:");

  peso3 = aguardeEntradaNumerica();
  Serial.println(peso3);


  //Calculo da media ponderada:
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

  Serial.print("Media ponderada: ");
  Serial.println(media, 1);
  delay(1000);
}

//criando uma função chamada
float aguardeEntradaNumerica() {
  while (!Serial.available() > 0) {
    //Aguarda até que um valor seja digitado
  }

  //Verifica se a entrada é numérica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //Descarta a entrada nao numérica
    Serial.read();
    while (Serial.available() == 0) {
      //Aguarda a nova entrada do usuário
    }
  }


  //retornar o valor digitado no serial em tipo floar
  return Serial.parseFloat();
}