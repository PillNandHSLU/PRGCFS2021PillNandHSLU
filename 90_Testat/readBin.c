#include <stdio.h>
#include <stdlib.h>



typedef struct {
	long long timeStamp;
	int pressure;
	char systemState;
	char alarmState;
} data;


int main()
{
	data sensorData;
	FILE *outputData;
	FILE *inputData;
	
	inputData = fopen("pressureSpike.bin", "rb");
	
	outputData = fopen("sensorData.csv", "w+");

	if (inputData == NULL )
	{
		printf("Pilli hat Bock geschossen...");
		exit(1);
	}
	
	fprintf(outputData, "Time Stamp, Pressure, System State, Alarm State");
	
	for (int i = 1; i < 2000; i++)
	{
		fread(&sensorData, 14, 1, inputData);
		printf("%lld \t %d \t %x \t %x\n", sensorData.timeStamp, sensorData.pressure, sensorData.systemState, sensorData.alarmState);
		
		fprintf(outputData, "\n%lld,%d,%x,%x", sensorData.timeStamp, sensorData.pressure, sensorData.systemState, sensorData.alarmState);
		
	}
	
	
	fclose(inputData);
	fclose(outputData);
	return 0;
}



