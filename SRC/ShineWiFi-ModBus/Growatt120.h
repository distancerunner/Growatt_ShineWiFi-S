#pragma once

#include "Arduino.h"
#include "Growatt.h"
#include "GrowattTypes.h"

// Growatt modbus protocol version 1.20
typedef enum {
  P120_I_STATUS = 0,
  P120_INPUT_POWER,
  P120_PV1_VOLTAGE,
  P120_PV1_INPUT_POWER,
  P120_PV1_INPUT_CURRENT,
  P120_PV2_VOLTAGE,
  P120_PV2_INPUT_POWER,
  P120_PV2_INPUT_CURRENT,
  P120_PV3_VOLTAGE,
  P120_PV3_INPUT_POWER,
  P120_PV3_INPUT_CURRENT,
  P120_PV4_VOLTAGE,
  P120_PV4_INPUT_POWER,
  P120_PV4_INPUT_CURRENT,
  P120_PV5_VOLTAGE,
  P120_PV5_INPUT_POWER,
  P120_PV5_INPUT_CURRENT,
  P120_PV6_VOLTAGE,
  P120_PV6_INPUT_POWER,
  P120_PV6_INPUT_CURRENT,
  P120_PV7_VOLTAGE,
  P120_PV7_INPUT_POWER,
  P120_PV7_INPUT_CURRENT,
  P120_PV8_VOLTAGE,
  P120_PV8_INPUT_POWER,
  P120_PV8_INPUT_CURRENT,
  P120_OUTPUT_POWER,
  P120_GRID_FREQUENCY,
  P120_GRID_L1_VOLTAGE,
  P120_GRID_L1_OUTPUT_CURRENT,
  P120_GRID_L1_OUTPUT_POWER,
  P120_GRID_L2_VOLTAGE,
  P120_GRID_L2_OUTPUT_CURRENT,
  P120_GRID_L2_OUTPUT_POWER,
  P120_GRID_L3_VOLTAGE,
  P120_GRID_L3_OUTPUT_CURRENT,
  P120_GRID_L3_OUTPUT_POWER,
  P120_GRID_RS_VOLTAGE,
  P120_GRID_ST_VOLTAGE,
  P120_GRID_TR_VOLTAGE,
  P120_ENERGY_TODAY,
  P120_ENERGY_TOTAL,
  P120_WORK_TIME_TOTAL,
  P120_PV1_ENERGY_TODAY,
  P120_PV1_ENERGY_TOTAL,
  P120_PV2_ENERGY_TODAY,
  P120_PV2_ENERGY_TOTAL,
  P120_PV3_ENERGY_TODAY,
  P120_PV3_ENERGY_TOTAL,
  P120_PV4_ENERGY_TODAY,
  P120_PV4_ENERGY_TOTAL,
  P120_PV5_ENERGY_TODAY,
  P120_PV5_ENERGY_TOTAL,
  P120_PV6_ENERGY_TODAY,
  P120_PV6_ENERGY_TOTAL,
  P120_PV7_ENERGY_TODAY,
  P120_PV7_ENERGY_TOTAL,
  P120_PV8_ENERGY_TODAY,
  P120_PV8_ENERGY_TOTAL,
  P120_PV_ENERGY_TOTAL,
  P120_INVERTER_TEMPERATURE,
  P120_INVERTER_IPM_TEMPERATURE,
  P120_INVERTER_BOOST_TEMPERATURE,
  P120_BUS_P_VOLTAGE,
  P120_BUS_N_VOLTAGE,
  P120_REAL_OUTPUT_POWER,
  P120_OUTPUT_MAXPOWER_LIMITED,
  P120_DERATINGMODE,
  P120_FAULT_CODE,
  P120_REAL_POWER,
  P120_START_DELAY,
  LASTInput
} eP120InputRegisters_t;

typedef enum {
  P120_OnOff,             // Register 0
  P120_CMD_MEMORY_STATE,  // Register 2
  P120_Active_P_Rate,     // Register 3
  LASTHolding
} eP120HoldingRegisters_t;

void init_growatt120(sProtocolDefinition_t &Protocol, Growatt &inverter);
