function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "autosar_tpc_actuator"};
	this.sidHashMap["autosar_tpc_actuator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In Bus Element"] = {sid: "autosar_tpc_actuator:18"};
	this.sidHashMap["autosar_tpc_actuator:18"] = {rtwname: "<Root>/In Bus Element"};
	this.rtwnameHashMap["<Root>/HBridgeDriver Lookup"] = {sid: "autosar_tpc_actuator:20"};
	this.sidHashMap["autosar_tpc_actuator:20"] = {rtwname: "<Root>/HBridgeDriver Lookup"};
	this.rtwnameHashMap["<Root>/Out Bus Element"] = {sid: "autosar_tpc_actuator:19"};
	this.sidHashMap["autosar_tpc_actuator:19"] = {rtwname: "<Root>/Out Bus Element"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
