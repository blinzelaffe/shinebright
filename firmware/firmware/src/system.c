/*
 * system.c
 *
 * Created: 3/4/2014 12:44:11 PM
 *  Author: Drobisch
 */ 

#include <system.h>
#include <ioport.h>


 static bool my_flag_autorize_cdc_transfert = false;
 bool my_callback_cdc_enable(void)
 {
	 my_flag_autorize_cdc_transfert = true;
	 return true;
 }
 void my_callback_cdc_disable(void)
 {
	 my_flag_autorize_cdc_transfert = false;
 }

 void task(void)
 {
	 if (my_flag_autorize_cdc_transfert) {
		 udi_cdc_putc('A');
		 udi_cdc_getc();
	 }
 }

void system_init (void)
{
	/* 
	 *
	 *
	 */	
	
	ioport_configure_pin(LED0_GPIO, IOPORT_DIR_OUTPUT | IOPORT_INIT_HIGH);
	ioport_configure_pin(LED1_GPIO, IOPORT_DIR_OUTPUT | IOPORT_INIT_HIGH);	
	
	sysclk_init();
    irq_initialize_vectors();
    cpu_irq_enable();	
	udc_start();
}


void system_run (void)
{
	/* 
	 *
	 *
	 */	
	uint16_t i = 0;
	uint16_t j = 0;
	uint16_t k = 0;
	
	
	while(1)
	{
		k= 0;
		for(i=0;i < 500;i++)
		{
			for(j=0;j<2000;j++)
			{
				k++;
			}
		}
		ioport_toggle_pin(LED0_GPIO);
			udi_cdc_putc('A');

	}
}