################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Model/ArrayNode.cpp \
../src/Model/CTECArray.cpp \
../src/Model/Node.cpp \
../src/Model/Timer.cpp 

OBJS += \
./src/Model/ArrayNode.o \
./src/Model/CTECArray.o \
./src/Model/Node.o \
./src/Model/Timer.o 

CPP_DEPS += \
./src/Model/ArrayNode.d \
./src/Model/CTECArray.d \
./src/Model/Node.d \
./src/Model/Timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/Model/%.o: ../src/Model/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


