int A=1;
//int B=0;


void setup(){
  Serial.begin(9600);
}


void loop(){ 
  
 double RedNeuronal = RED(-1,0,A);

 imprime(RedNeuronal);
  

}



double RED (double w1, double bias, double Ent1){
  double Z = w1*Ent1 + bias;
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
    Serial.print("Salida de RED Neuronal:");
  Serial.println(Output);
  delay(1000);
}
