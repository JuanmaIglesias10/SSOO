#include "protocolo.h"
#include "sockets.h"

void chequearErrores(char* tipoError, int status);

//Hechas por nosotros para conectarse y escuchar
int server_escuchar(t_log *logger, char *puerto);
void conectarse(t_config *config, char *ip, char *puerto, char *nombreDelModulo, t_log*); 
t_config *iniciar_config(char* nombreArchivoconfig);
t_log* iniciar_logger(char* rutaLog, char* nombreProceso , t_log_level level);

