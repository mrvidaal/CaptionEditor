/*-----------------------------------------------------------
*          UNIFAL – Universidade Federal de Alfenas.        
 * Trabalho..: Editor de Legendas usando lista encadeada    
 * Disciplina: Estrutura de Dados I                         
 * Professor.: Luiz Eduardo da Silva                        
 * Aluno(s)..: Beatriz de Oliveira Rodrigues
 *             Maurício Roque Vidal                             
 *             Monica de Cassia Roncada 
 *             Willian de Souza Soares       
 * Data......: 27/05/2015                                   
 *------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculo_hora.h"
#include "legenda.h"

/*
 * 
 */

int main(int argc, char** argv) {
    char ini[13], fim[13];
    
    strcpy(ini, "00:00:01,000");
    strcpy(fim, "01:00:00,000");
    printf("%d",horaIgual("00:00:11,000","00:00:11,000"));
    
    printf("Ini: %s \n", ini);
    printf("Fim: %s \n", fim);
    
    return (EXIT_SUCCESS);
}



