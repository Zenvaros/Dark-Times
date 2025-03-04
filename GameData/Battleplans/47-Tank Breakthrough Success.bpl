UID = 47
Alias = bplTankBreakthrough
Name = $bpl_nam_TankBreakthrough
Text = $bpl_txt_TankBreakthrough
Kind = 5
Background = $colNavyLightBlue
ImageSmall = bpl_small_TankBreakthrough.png
ImageMedium = bpl_medium_TankBreakthrough.png
Deployments = $bplBreakthroughDepl
BranchToFailure = $bplTankBreakthroughF
BranchToCountered = $bplTankBreakthroughC
OwnAllowedFamilies = $famHvyVehicle|$famLtVehicle|$famElite|$famLine
ForbidTerrains = $Marsh|$Swamp|$Mountain
MinOff = 2
MinTrenchOpp = 2
NeedThisAttribOwn = #TNK1#|#TNK2#
NumThisAttribOwn = 1
OwnCohSuccess = 1
OwnCohFail = 3
OwnCohCountered = 6
CounterBP1 = $bplCommitReserves
CounterBP2 = $bplMassedForwardArtillery
CounterBP3 = $bplCreepingBarrage
CounterValue = -70
SuccessBase = 85
SuccessCohLowLevel = 25
SuccessCohLowValue = -25
SuccessCohHighLevel = 75
SuccessCohHighValue = 25
SuccessLdrLowLevel = 2
SuccessLdrLowValue = -25
SuccessLdrHighLevel = 4
SuccessLdrHighValue = 40
ModFrontageChange = 150
ModOppSignature = 150
OppBypassSupport = 10
ModExtraCohCbt = -1
ModOppExtraCohCbt = 1
ModIgnoreTrench = 3
ModRangedToHit = 5
ModAssault = 15
ModProtModifier = 2
ModRangedCohDmg = 10
ModRangedHitDmg = 10
ModAssaultCohDmg = 5
ModAssaultHitDmg = 5
ModOppRangedCohDmg = -25
ModOppRangedHitDmg = -25
AIModChanceInfChunk = 10
AIModChanceCavChunk = 0
AIModChanceArtChunk = 0
AIModChanceTankChunk = 100
AIModChanceLdrStr = 15
AIModChanceLdrOff = 25
AIModChanceLdrDef = 5
AIModChancePostureNeu = 30
AIModChancePostureOff = 30
AIModChancePostureDef = 1
AIModChancePosturePas = 0
AIModChanceHigherDifCbtPwr = 9
AIModChanceLowerDifCbtPwr = 1
