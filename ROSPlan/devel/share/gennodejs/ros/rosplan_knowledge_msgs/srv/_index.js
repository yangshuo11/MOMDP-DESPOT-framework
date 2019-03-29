
"use strict";

let GenerateProblemService = require('./GenerateProblemService.js')
let CreatePRM = require('./CreatePRM.js')
let SetNamedBool = require('./SetNamedBool.js')
let SetFloat = require('./SetFloat.js')
let AddWaypoint = require('./AddWaypoint.js')
let KnowledgeUpdateService = require('./KnowledgeUpdateService.js')
let GetDomainPredicateDetailsService = require('./GetDomainPredicateDetailsService.js')
let GetDomainNameService = require('./GetDomainNameService.js')
let KnowledgeQueryService = require('./KnowledgeQueryService.js')
let RemoveWaypoint = require('./RemoveWaypoint.js')
let GetRDDLParams = require('./GetRDDLParams.js')
let GetDomainTypeService = require('./GetDomainTypeService.js')
let GetDomainOperatorDetailsService = require('./GetDomainOperatorDetailsService.js')
let GetMetricService = require('./GetMetricService.js')
let GetDomainAttributeService = require('./GetDomainAttributeService.js')
let KnowledgeUpdateServiceArray = require('./KnowledgeUpdateServiceArray.js')
let SetInt = require('./SetInt.js')
let GetInstanceService = require('./GetInstanceService.js')
let GetDomainOperatorService = require('./GetDomainOperatorService.js')
let GetAttributeService = require('./GetAttributeService.js')

module.exports = {
  GenerateProblemService: GenerateProblemService,
  CreatePRM: CreatePRM,
  SetNamedBool: SetNamedBool,
  SetFloat: SetFloat,
  AddWaypoint: AddWaypoint,
  KnowledgeUpdateService: KnowledgeUpdateService,
  GetDomainPredicateDetailsService: GetDomainPredicateDetailsService,
  GetDomainNameService: GetDomainNameService,
  KnowledgeQueryService: KnowledgeQueryService,
  RemoveWaypoint: RemoveWaypoint,
  GetRDDLParams: GetRDDLParams,
  GetDomainTypeService: GetDomainTypeService,
  GetDomainOperatorDetailsService: GetDomainOperatorDetailsService,
  GetMetricService: GetMetricService,
  GetDomainAttributeService: GetDomainAttributeService,
  KnowledgeUpdateServiceArray: KnowledgeUpdateServiceArray,
  SetInt: SetInt,
  GetInstanceService: GetInstanceService,
  GetDomainOperatorService: GetDomainOperatorService,
  GetAttributeService: GetAttributeService,
};
