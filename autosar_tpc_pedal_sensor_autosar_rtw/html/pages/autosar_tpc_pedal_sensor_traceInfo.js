function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "autosar_tpc_pedal_sensor"};
	this.sidHashMap["autosar_tpc_pedal_sensor"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In Bus Element"] = {sid: "autosar_tpc_pedal_sensor:20"};
	this.sidHashMap["autosar_tpc_pedal_sensor:20"] = {rtwname: "<Root>/In Bus Element"};
	this.rtwnameHashMap["<Root>/Setpoint Lookup"] = {sid: "autosar_tpc_pedal_sensor:12"};
	this.sidHashMap["autosar_tpc_pedal_sensor:12"] = {rtwname: "<Root>/Setpoint Lookup"};
	this.rtwnameHashMap["<Root>/Out Bus Element"] = {sid: "autosar_tpc_pedal_sensor:21"};
	this.sidHashMap["autosar_tpc_pedal_sensor:21"] = {rtwname: "<Root>/Out Bus Element"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
