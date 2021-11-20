void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);

}

int i;

void one()
{
  for(i=7;i<14;i++)
  {
    if(i==12 || i==11)
    {
      digitalWrite(i,HIGH);
    }
    else
    {
      digitalWrite(i,LOW);
    }
  }
  delay(400);
}

void two()
{
  for(i=7;i<14;i++)
  {
    if(i==8 || i==11)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  }

  delay(400);
}

void three()
{

  for(i=7;i<14;i++)
  {
    if(i==8 || i==9)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 

  delay(400);
}

void four()
{
  for(i=7;i<14;i++)
  {
    if(i==9 || i==10 || i==13)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 

  delay(400);
}

void five()
{

  for(i=7;i<14;i++)
  {
    if(i==12 || i==9)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 

  delay(400);
}

void six()
{

  for(i=7;i<14;i++)
  {
    if(i==12)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 
  
  delay(400);
}

void seven()
{

  for(i=7;i<14;i++)
  {
    if(i==11 || i==12 || i==13)
    {
      digitalWrite(i,HIGH);
    }
    else
    {
      digitalWrite(i,LOW);
    }
  } 

  delay(400);
}

void eight()
{
  for(i=7;i<14;i++)
  {
    digitalWrite(i,HIGH);
  }

  delay(400);
}

void nine()
{

  for(i=7;i<14;i++)
  {
    if(i==9)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 

  delay(400);
}

void zero()
{
  for(i=7;i<14;i++)
  {
    if(i==7)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 
  
  delay(400);
}

void eleven()
{

  for(i=7;i<14;i++)
  {
    if(i==7 || i==10 || i==13)
    {
      digitalWrite(i,LOW);
    }
    else
    {
      digitalWrite(i,HIGH);
    }
  } 

  delay(400);
}

void loop() {

  eleven();
  nine();
  eight();
  seven();
  six();
  five();
  four();
  three();
  two();
  one();
  zero();
}
