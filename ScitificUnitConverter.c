#include
<stdio.h>#include
<stdlib.h>#include
<string.h>
// Linked list node to store unit
informationstructUnitNode{
charname[20];
float
(*conversionFunc)(float);struc
tUnitNode* next;
};
//Temperatureconversionfunctionsfloatc
elsiusToFahrenheit(floatcelsius){
return(celsius *9 / 5)+32;
}
float fahrenheitToCelsius(float fahrenheit)
{return(fahrenheit-32)* 5 /9;
}
float celsiusToKelvin(float celsius)
{returncelsius + 273.15;
}
float kelvinToCelsius(float kelvin)
{returnkelvin -273.15;
}

// Length conversion
functionsfloatmetersToFeet(floatm
eters){

returnmeters*3.28084;
}
float feetToMeters(float feet)
{returnfeet / 3.28084;
}
//Weightconversionfunctions
float kilogramsToPounds(float kilograms)
{returnkilograms * 2.20462;
}
float poundsToKilograms(float pounds)
{return pounds / 2.20462;
}
//Function tocreateanew unitnode
structUnitNode* createUnitNode(char name[], float (*conversionFunc)(float))
{structUnitNode*newNode=(structUnitNode*)malloc(sizeof(structUnitNode));if(
newNode) {
strcpy(newNode->name,name);
newNode->conversionFunc =
conversionFunc;newNode->next=NULL;
}
returnnewNode;
}
intmain() {
//Createlinkedlist fortemperatureconversions
structUnitNode* temperatureHead = createUnitNode("Celsius to
Fahrenheit",celsiusToFahrenheit);

temperatureHead->next=createUnitNode("FahrenheittoCelsius",fahrenheitToCelsius);
temperatureHead->next->next = createUnitNode("Celsius to Kelvin",
celsiusToKelvin);temperatureHead->next->next->next=createUnitNode("Kelvin
toCelsius",
kelvinToCelsius);
//Createlinkedlist forlengthconversions
structUnitNode* lengthHead = createUnitNode("Meters to Feet",
metersToFeet);lengthHead->next= createUnitNode("Feet
toMeters",feetToMeters);
//Createlinkedlistforweightconversions
structUnitNode* weightHead = createUnitNode("Kilograms to
Pounds",kilogramsToPounds);
weightHead->next=createUnitNode("PoundstoKilograms",poundsToKilograms);
int choice,
conversionType;floatvalue;
while(1){
printf("UnitConverter\n");
printf("1. Temperature
Conversion\n");printf("2. Length
Conversion\n");printf("3. Weight
Conversion\n");printf("4.Exit\n");
printf("Enter your choice (1, 2, 3, or 4 to exit):
");scanf("%d",&choice);
if(choice==4){
printf("Exiting the Unit
Converter.\n");break;

}
