
"use strict";

let JointSingleCommand = require('./JointSingleCommand.js');
let JointTemps = require('./JointTemps.js');
let JointTrajectoryCommand = require('./JointTrajectoryCommand.js');
let TurretJoy = require('./TurretJoy.js');
let HexJoy = require('./HexJoy.js');
let LocobotJoy = require('./LocobotJoy.js');
let ArmJoy = require('./ArmJoy.js');
let JointGroupCommand = require('./JointGroupCommand.js');

module.exports = {
  JointSingleCommand: JointSingleCommand,
  JointTemps: JointTemps,
  JointTrajectoryCommand: JointTrajectoryCommand,
  TurretJoy: TurretJoy,
  HexJoy: HexJoy,
  LocobotJoy: LocobotJoy,
  ArmJoy: ArmJoy,
  JointGroupCommand: JointGroupCommand,
};
