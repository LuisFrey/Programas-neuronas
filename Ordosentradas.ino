int A=0;
int B=1;


void setup(){
  Serial.begin(9600);
}


void loop(){ 
  
 double RedNeuronal = RED(1,1,-1,A,B);

 imprime(RedNeuronal);
  

}



double RED (double w1, double w2, double bias, double Ent1, double Ent2){
  double Z = w1*Ent1 + w2*Ent2 + bias;
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
    Serial.print("Salida de RED Neuronal:");
  Serial.println(Output);
  delay(1000);
}
