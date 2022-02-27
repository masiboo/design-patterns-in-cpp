CC = g++ -pedantic -pedantic-errors -w -Wextra -Wall -W -O3
target = RunApp

RunApp: RunApp.cpp AppointmentBuilder.cpp Appointment.cpp Scheduler.cpp
	${CC} -o $(target) RunApp.cpp AppointmentBuilder.cpp Appointment.cpp Scheduler.cpp -g
