int A = 1;
int B = 1;
int C = 1;

void setup(){
  Serial.begin(9600);
}


void loop(){ 
  
 double RedNeuronal = RED(2,1,1,-4,A,B,C);

 imprime(RedNeuronal);
  

}



double RED (double w1, double w2,double w3, double bias, double Ent1, double Ent2, double Ent3){
  double Z = w1*Ent1 + w2*Ent2 + w3*Ent3 + bias;
  double Salida = Activacion(Z);

  return Salida;
}



double Activacion(double z){


double y = 0;

if (z>=0) {
  y=1;
}
else{
  y=0;
}
  return y;  

}

void imprime(double Output){
  Serial.println("*********");
  Serial.print("Entrada A:");
  Serial.println(A);
  Serial.print("Entrada B:");
  Serial.println(B);
  Serial.print("Entrada C:");
  Serial.println(C);
    Serial.print("Salida de RED Neuronal:");
  Serial.println(Output);
  delay(1000);
}
