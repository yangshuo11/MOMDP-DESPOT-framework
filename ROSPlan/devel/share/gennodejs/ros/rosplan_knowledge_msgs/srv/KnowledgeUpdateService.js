// Auto-generated. Do not edit!

// (in-package rosplan_knowledge_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let KnowledgeItem = require('../msg/KnowledgeItem.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class KnowledgeUpdateServiceRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.update_type = null;
      this.knowledge = null;
    }
    else {
      if (initObj.hasOwnProperty('update_type')) {
        this.update_type = initObj.update_type
      }
      else {
        this.update_type = 0;
      }
      if (initObj.hasOwnProperty('knowledge')) {
        this.knowledge = initObj.knowledge
      }
      else {
        this.knowledge = new KnowledgeItem();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KnowledgeUpdateServiceRequest
    // Serialize message field [update_type]
    bufferOffset = _serializer.uint8(obj.update_type, buffer, bufferOffset);
    // Serialize message field [knowledge]
    bufferOffset = KnowledgeItem.serialize(obj.knowledge, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KnowledgeUpdateServiceRequest
    let len;
    let data = new KnowledgeUpdateServiceRequest(null);
    // Deserialize message field [update_type]
    data.update_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [knowledge]
    data.knowledge = KnowledgeItem.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += KnowledgeItem.getMessageSize(object.knowledge);
    return length + 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'rosplan_knowledge_msgs/KnowledgeUpdateServiceRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e943068064990bb20643b6493c74050f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    
    uint8 ADD_KNOWLEDGE = 0
    uint8 ADD_GOAL = 1
    uint8 REMOVE_KNOWLEDGE = 2
    uint8 REMOVE_GOAL = 3
    uint8 ADD_METRIC = 4
    uint8 REMOVE_METRIC = 5
    
    uint8 update_type
    rosplan_knowledge_msgs/KnowledgeItem knowledge
    
    ================================================================================
    MSG: rosplan_knowledge_msgs/KnowledgeItem
    # A knowledge item used to represent a piece of the state in ROSPlan
    
    uint8 INSTANCE = 0
    uint8 FACT = 1
    uint8 FUNCTION = 2
    uint8 EXPRESSION = 3
    uint8 INEQUALITY = 4
    
    uint8 knowledge_type
    
    # time at which this knowledge becomes true
    time initial_time
    
    # knowledge is explicitly false
    bool is_negative
    
    #---------
    # INSTANCE
    #---------
    
    # instance knowledge_type
    string instance_type
    string instance_name
    
    #----------------------
    # PREDICATE OR FUNCTION
    #----------------------
    
    # attribute knowledge_type
    string attribute_name
    diagnostic_msgs/KeyValue[] values
    
    #---------
    # FUNCTION
    #---------
    
    # function value
    float64 function_value
    
    #-----------
    # EXPRESSION
    #-----------
    
    string optimization
    rosplan_knowledge_msgs/ExprComposite expr
    
    #-----------
    # INEQUALITY
    #-----------
    
    rosplan_knowledge_msgs/DomainInequality ineq
    
    ================================================================================
    MSG: diagnostic_msgs/KeyValue
    string key # what to label this value when viewing
    string value # a value to track over time
    
    ================================================================================
    MSG: rosplan_knowledge_msgs/ExprComposite
    # A message used to represent a numerical expression; composite type (2/2)
    # stores an array of ExprBase as prefix notation
    
    # components
    ExprBase[] tokens
    
    ================================================================================
    MSG: rosplan_knowledge_msgs/ExprBase
    # A message used to represent a numerical expression; base types (1/2)
    
    # expression types
    uint8 CONSTANT = 0
    uint8 FUNCTION = 1
    uint8 OPERATOR = 2
    uint8 SPECIAL  = 3
    
    # operators
    uint8 ADD    = 0
    uint8 SUB    = 1
    uint8 MUL    = 2
    uint8 DIV    = 3
    uint8 UMINUS = 4
    
    # special types
    uint8 HASHT      = 0
    uint8 TOTAL_TIME = 1
    uint8 DURATION   = 2
    
    # expression base type
    uint8 expr_type
    
    # constant value
    float64 constant
    
    # function
    rosplan_knowledge_msgs/DomainFormula function
    
    # operator
    uint8 op
    
    # special
    uint8 special_type
    
    ================================================================================
    MSG: rosplan_knowledge_msgs/DomainFormula
    # A message used to represent an atomic formula from the domain.
    # typed_parameters matches label -> type
    string name
    diagnostic_msgs/KeyValue[] typed_parameters
    
    ================================================================================
    MSG: rosplan_knowledge_msgs/DomainInequality
    # A message used to store the numeric effects of an action
    # Can be grounded or ungrounded
    
    uint8 GREATER   = 0
    uint8 GREATEREQ = 1
    uint8 LESS      = 2
    uint8 LESSEQ    = 3
    uint8 EQUALS    = 4
    
    uint8 comparison_type
    
    rosplan_knowledge_msgs/ExprComposite LHS
    rosplan_knowledge_msgs/ExprComposite RHS
    
    bool grounded
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new KnowledgeUpdateServiceRequest(null);
    if (msg.update_type !== undefined) {
      resolved.update_type = msg.update_type;
    }
    else {
      resolved.update_type = 0
    }

    if (msg.knowledge !== undefined) {
      resolved.knowledge = KnowledgeItem.Resolve(msg.knowledge)
    }
    else {
      resolved.knowledge = new KnowledgeItem()
    }

    return resolved;
    }
};

// Constants for message
KnowledgeUpdateServiceRequest.Constants = {
  ADD_KNOWLEDGE: 0,
  ADD_GOAL: 1,
  REMOVE_KNOWLEDGE: 2,
  REMOVE_GOAL: 3,
  ADD_METRIC: 4,
  REMOVE_METRIC: 5,
}

class KnowledgeUpdateServiceResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KnowledgeUpdateServiceResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KnowledgeUpdateServiceResponse
    let len;
    let data = new KnowledgeUpdateServiceResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'rosplan_knowledge_msgs/KnowledgeUpdateServiceResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '358e233cde0c8a8bcfea4ce193f8fc15';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new KnowledgeUpdateServiceResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    return resolved;
    }
};

module.exports = {
  Request: KnowledgeUpdateServiceRequest,
  Response: KnowledgeUpdateServiceResponse,
  md5sum() { return '90de09cbbb5b3496e6f4f1a32e72c3a4'; },
  datatype() { return 'rosplan_knowledge_msgs/KnowledgeUpdateService'; }
};
