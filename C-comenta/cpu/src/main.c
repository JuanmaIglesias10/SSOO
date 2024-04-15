#include <../include/main.h>

int main(void) {

	t_log *logger;

	// ------------  CPU CLIENTE DE MEMORIA -------------------
	
	t_config* config = iniciar_config("../cpu.config");
	logger = iniciar_logger("logCPU.log","Client",LOG_LEVEL_INFO);

	conectarse(config, "IP", "PUERTO_MEMORIA", "cpu", logger);

	// ----------- CPU SERVER DE KERNEL ------------------------

	logger = iniciar_logger("logCPU.log", "Server", LOG_LEVEL_DEBUG);
	server_escuchar(logger, "4445");
}

