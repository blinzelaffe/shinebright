/*
 * system.h
 *
 * Created: 3/4/2014 12:44:41 PM
 *  Author: Drobisch
 */ 


#ifndef SYSTEM_H_
#define SYSTEM_H_

#include <compiler.h>
#include <status_codes.h>
#include <interrupt.h>
#include <parts.h>
#include <asf.h>

void system_init (void);
void system_run (void);


#endif /* SYSTEM_H_ */