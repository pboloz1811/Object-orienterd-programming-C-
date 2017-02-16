################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Models/Container.cpp \
../src/Models/Point.cpp 

OBJS += \
./src/Models/Container.o \
./src/Models/Point.o 

CPP_DEPS += \
./src/Models/Container.d \
./src/Models/Point.d 


# Each subdirectory must supply rules for building sources it contributes
src/Models/%.o: ../src/Models/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


