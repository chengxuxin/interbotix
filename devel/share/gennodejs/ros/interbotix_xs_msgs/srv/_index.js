
"use strict";

let MotorGains = require('./MotorGains.js')
let RegisterValues = require('./RegisterValues.js')
let RobotInfo = require('./RobotInfo.js')
let Reboot = require('./Reboot.js')
let TorqueEnable = require('./TorqueEnable.js')
let OperatingModes = require('./OperatingModes.js')

module.exports = {
  MotorGains: MotorGains,
  RegisterValues: RegisterValues,
  RobotInfo: RobotInfo,
  Reboot: Reboot,
  TorqueEnable: TorqueEnable,
  OperatingModes: OperatingModes,
};
