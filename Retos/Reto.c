#include <stdio.h>
#include <math.h>
int menu(void);
int submenu_ohm (void);
float calcular_voltaje(float , float);
float calcular_corriente(float , float);
float calcular_resistencia(float , float);
int submenu_f_potencia (void);
float calcular_potencia_activa (float, float, float);
float calcular_potencia_aparente (float, float);
float calcular_factor_potencia (float, float);
void calcular_resistencia_led(void);
void calcular_resistencia_conductor(void);

 
 
int main(){
    int opcion, parametro;
     float V_fuente, V_f, I_f, R, P_R, P_Total, I_Total;
    int num_leds;
    char conexion;
    float corriente, resistencia, voltaje, resultado, factor_potencia, potencia_Ac, potencia_Ap;
    do { opcion = menu();
    switch (opcion){
        case 1:
            printf("Eligió calcular Ley de Ohm\n");
             do { parametro = submenu_ohm();
                switch (parametro){
                    case 1:
                    printf("1. Calcular Tensión (Voltaje)\n");
                            printf("Ingresa el valor de la corriente (I) en amperios: \n");
                            scanf("%f", &corriente);
                            printf("Ingresa el valor de la resistencia (R) en ohmios: \n");
                            scanf("%f", &resistencia);
                            resultado = calcular_voltaje(corriente, resistencia);
                            printf("El voltaje es: %.2f V\n", resultado);
                    break;
                    case 2:
                    printf("2. Calcular Corriente\n");
                    printf("Ingresa el valor del voltaje (V) en voltios: \n");
                            scanf("%f", &voltaje);
                            printf("Ingresa el valor de la resistencia (R) en ohmios: \n");
                            scanf("%f", &resistencia);
                            resultado = calcular_corriente(voltaje , resistencia);
                            printf("La corriente es: %.2f A\n", resultado);
                    break;
                    case 3:
                    printf("3. Calcular Resistencia\n");
                    printf("Ingresa el valor del voltaje (V) en voltios: \n");
                            scanf("%f", &voltaje);
                            printf("Ingresa el valor de la corriente (I) en amperios: \n");
                            scanf("%f", &corriente);
                            resultado = calcular_resistencia(voltaje , corriente);
                            printf("La resistencia es: %.2f Ω\n", resultado);
                    break;
                    case 4:
                    printf("4. Volver al menú principal\n");
                    break;
                    default:
                    printf("¡ERRORRR! Elija nuevamente la opción deseada\n");
                    break;
                }
                }while(parametro !=4);  
            break;
        case 2:
            printf("Eligió calcular Factor de Potencia\n");
             do { parametro = submenu_f_potencia();
                switch (parametro){
                    case 1:
                        printf("1. Potencia activa\n");
                        printf("Ingresa el voltaje (V): ");
                        scanf("%f", &voltaje);
                        printf("Ingresa la corriente (I): ");
                        scanf("%f", &corriente);
                        printf("Ingresa el factor de potencia (cosθ): ");
                        scanf("%f", &factor_potencia);
                        potencia_Ac = calcular_potencia_activa(voltaje, corriente, factor_potencia);
                        potencia_Ap = calcular_potencia_aparente(voltaje, corriente);
                        float potencia_Reactiva = sqrt(pow(potencia_Ap, 2) - pow(potencia_Ac, 2));

                        printf("\nResultados:\n");
                        printf("Potencia activa (P): %.2f W\n", potencia_Ac);
                        printf("Potencia aparente (S): %.2f VA\n", potencia_Ap);
                        printf("Potencia reactiva (Q): %.2f VAR\n", potencia_Reactiva);
                        printf("Factor de potencia (cosθ): %.2f\n", factor_potencia);
                    break;
                    
                    case 2:
                        printf("2. Potencia aparente\n");
                        printf("Ingresa el voltaje (V): ");
                        scanf("%f", &voltaje);
                        printf("Ingresa la corriente (I): ");
                        scanf("%f", &corriente);
                        potencia_Ap = calcular_potencia_aparente(voltaje, corriente);
                        printf("La potencia aparente es de: %.2f VA\n", potencia_Ap);
           
                    break;
                    
                    case 3:
                    printf("3. Factor de potencia\n");
                    printf("Ingresa la potencia activa (P)\n");
                    scanf("%f", &potencia_Ac);
                    printf("Ingresa la potencia aparente (S)\n");
                    scanf ("%f",&potencia_Ap);
                     if (potencia_Ap == 0) {
                    printf("¡ERROR! La potencia aparente no puede ser cero\n");
                    } else {
                    factor_potencia = calcular_factor_potencia(potencia_Ac, potencia_Ap);
                    float potencia_Reactiva = sqrt(pow(potencia_Ap, 2) - pow(potencia_Ac, 2));

                    printf("\nResultados:\n");
                    printf("Factor de potencia (cosθ): %.2f\n", factor_potencia);
                    printf("Potencia reactiva (Q): %.2f VAR\n", potencia_Reactiva);
                    }
                    break;
                    
                    case 4:
                    printf("4. Volver al menú principal\n");
                    break;
                    
                    default:
                    printf("¡ERRORRR! Elija nuevamente la opción deseada\n");
                    break;
                }
             }while(parametro != 4);
            break;
        case 3:
            
            printf("Eligió calcular la resistencia de un conductor\n");
            calcular_resistencia_conductor();
            break;
        case 4:
        printf("Eligió calcular el valor de la resistencia para un LED\n");
        do {
        printf("1. Calcular Valor de la Resistencia para un LED\n");
        printf("2. Volver al menú principal\n");
        printf("Seleccione un parámetro: ");
        scanf("%d", &parametro);

        switch (parametro) {
            case 1:
                calcular_resistencia_led();
                break;
            case 2:
            printf("4. Volver al menú principal\n");
                break;
            default:
                printf("¡ERRORRR! Elija nuevamente la opción deseada\n");
        }
    } while (opcion != 2);

            
       
        break;
        case 5:
            printf("Salir\n");
            break;
        default:
            printf("¡ERRORRR! Elija nuevamente la opción deseada\n");
            break;
        }    
    }while(opcion != 5);
return 0;
}
 
 
 
 
int menu(void)
{
    int opcion;
    printf("Bienvenido a la Calculadora de Ingeniería\n Por favor, selecciona una opción:\n");
    printf("1. Calcular Ley de Ohm\n");
    printf("2. Calcular Factor de Potencia\n");
    printf("3. Calcular Resistencia de un Conductor\n");
    printf("4. Calcular Valor de la Resistencia para un LED\n");
    printf("5. Salir\n");
    printf("Ingresa el número de la opción deseada:\n");
    scanf("%d", &opcion);
    return opcion;
}
 
 
int submenu_ohm (void)
{
    int parametro;
    printf("Has seleccionado calcular la Ley de Ohm\n ¿Qué parámetro deseas calcular?\n");
    printf("1. Calcular Tensión (Voltaje)\n");
    printf("2. Calcular Corriente\n");
    printf("3. Calcular Resistencia\n");
    printf("4. Volver al menú principal\n");
    printf("Ingresa el número del parámetro deseado:\n");
    scanf("%d", &parametro);
    return parametro;
}
 
float calcular_voltaje(float corriente, float resistencia)
{ 
    float calcular_voltaje = corriente * resistencia;
    return corriente * resistencia;
}
 
float calcular_corriente(float voltaje , float resistencia)
{ 
     if (resistencia == 0) {
        printf("¡ERROR! no se puede dividir entre cero\n");
        return 0;
    }
    
    float calcular_corriente = voltaje / resistencia;
    return voltaje / resistencia;
}
 
float calcular_resistencia(float voltaje , float corriente)
{ 
     if (corriente == 0) {
        printf("¡ERROR! no se puede dividir entre cero\n");
        return 0;
    }
    
    float calcular_resistencia = voltaje / corriente;
    return voltaje / corriente;
}
 
int submenu_f_potencia (void)
{
    int parametro;
    printf("Has seleccionado calcular Factor de Potencia\n ¿Qué parámetro deseas calcular?\n");
    printf("1. Potencia activa\n");
    printf("2. Potencia aparente\n");
    printf("3. Factor de potencia\n");
    printf("4. Volver al menú principal\n");
    scanf("%d", &parametro);
    return parametro;
}

float calcular_potencia_activa (float voltaje, float corriente, float factor_potencia)
{
 float calcular_potencia_activa =  voltaje * corriente * factor_potencia;
 return  voltaje * corriente * factor_potencia;
}

float calcular_potencia_aparente (float voltaje, float corriente)
{
    float calcular_potencia_aparente = voltaje * corriente;
    return voltaje * corriente;
}

float calcular_factor_potencia (float potencia_Ac, float potencia_Ap)
{
    if (potencia_Ap == 0) {
        printf("¡ERROR! no se puede dividir entre cero\n");
        return 0;
    } 
    
  float calcular_factor_potencia = potencia_Ac / potencia_Ap;
  return potencia_Ac / potencia_Ap;
}


void calcular_resistencia_led(void)
{
    
float V_fuente, V_f, I_f, R, P_R, P_Total, I_Total;
    int num_leds;
    char conexion;
    printf("\nIngrese la tensión de la fuente en voltios (V): ");
    scanf("%f", &V_fuente);
    printf("Ingrese el número de LEDs en el circuito: ");
    scanf("%d", &num_leds);
    printf("Ingrese la conexión de los LEDs (s para serie, p para paralelo): ");
    scanf(" %c", &conexion);
    printf("Ingrese la tensión nominal del LED en voltios (Vf): ");
    scanf("%f", &V_f);
    printf("Ingrese la corriente nominal del LED en amperios (If): ");
    scanf("%f", &I_f);

    
    if (V_fuente <= 0 || num_leds <= 0 || V_f <= 0 || I_f <= 0) {
        printf("¡ERROR! Los valores ingresados deben ser positivos.\n");
        return;
    }

    if (conexion == 's') {
        // Cálculos en conexión en serie
        if (V_fuente <= num_leds * V_f) {
            printf("¡ERROR! La tensión de la fuente es insuficiente para esta cantidad de LEDs en serie.\n");
            return;
        }
        R = (V_fuente - (num_leds * V_f)) / I_f;
        I_Total = I_f;
    } else if (conexion == 'p') {
        // Cálculos en conexión en paralelo
        if (V_fuente <= V_f) {
            printf("¡ERROR! La tensión de la fuente debe ser mayor que la tensión de un solo LED.\n");
            return;
        }
        R = (V_fuente - V_f) / (num_leds * I_f);
        I_Total = num_leds * I_f;
    } else {
        printf("¡ERROR! Tipo de conexión no válida.\n");
        return;
    }

    P_R = I_Total * I_Total * R;
    P_Total = V_fuente * I_Total;


    printf("\nResultados:\n");
    printf("Valor de la resistencia (R): %.2f Ω\n", R);
    printf("Potencia disipada en la resistencia (P_R): %.2f W\n", P_R);
    printf("Potencia total del circuito (P_Total): %.2f W\n", P_Total);
    printf("Corriente total suministrada por la fuente (I_Total): %.2f A\n", I_Total);
}

void calcular_resistencia_conductor(void) {
    int opcion_material;
    float resistividad, coef_temp;
    float longitud, area, temperatura, resistencia;

 
    const float RESISTIVIDAD_ORO = 2.44e-8;
    const float COEF_TEMP_ORO = 0.0034;
    const float RESISTIVIDAD_ALUMINIO = 2.82e-8;
    const float COEF_TEMP_ALUMINIO = 0.0040;
    const float RESISTIVIDAD_COBRE = 1.68e-8;
    const float COEF_TEMP_COBRE = 0.00393;

    printf("\nSeleccione el material del conductor:\n");
    printf("1. Oro\n2. Aluminio\n3. Cobre\n4. Otro \n");
    printf("Ingrese el número de la opción deseada: ");
    scanf("%d", &opcion_material);

    switch (opcion_material) {
        case 1:
            resistividad = RESISTIVIDAD_ORO;
            coef_temp = COEF_TEMP_ORO;
            break;
        case 2:
            resistividad = RESISTIVIDAD_ALUMINIO;
            coef_temp = COEF_TEMP_ALUMINIO;
            break;
        case 3:
            resistividad = RESISTIVIDAD_COBRE;
            coef_temp = COEF_TEMP_COBRE;
            break;
        case 4:
            printf("Ingrese la resistividad del material en ohmios metro (Ω·m): ");
            scanf("%f", &resistividad);
            printf("Ingrese el coeficiente de temperatura (1/°C): ");
            scanf("%f", &coef_temp);
            break;
        default:
            printf("¡ERRORRR! Elija nuevamente la opción deseada\n");
            return;
    }


    printf("Ingrese la longitud del conductor en metros (m): ");
    scanf("%f", &longitud);
    printf("Ingrese el área de la sección transversal en metros cuadrados (m²): ");
    scanf("%f", &area);
    printf("Ingrese la temperatura en grados Celsius (°C): ");
    scanf("%f", &temperatura);


    if (longitud <= 0 || area <= 0) {
        printf("¡ERROR! La longitud y el área deben ser valores positivos\n");
        return;
    }

    resistencia = (resistividad * longitud / area) * (1 + coef_temp * (temperatura - 20));


    printf("\nResultados:\n");
    printf("Resistencia del conductor: %.6f Ω\n", resistencia);
}