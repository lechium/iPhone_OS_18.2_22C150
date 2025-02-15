//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDDiagnosticOperation.h"

__attribute__((visibility("hidden")))
@interface HDOntologyDiagnosticOperation : HDDiagnosticOperation
{
}

+ (id)_udcTableColumnTitles;	// IMP=0x008000000000e489
+ (void)_appendEntry:(id)arg1 tableFormatter:(id)arg2;	// IMP=0x008000000000af05
- (_Bool)_enumerateUDCTableInDatabase:(id)arg1 appendToFormatter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000e496
- (void)_reportUDCTableInDatabase:(id)arg1;	// IMP=0x000000000000e30a
- (void)_reportCountsForUDCTableRowsInDatabase:(id)arg1;	// IMP=0x000000000000e13a
- (void)_reportUserDomainConceptsForDatabase:(id)arg1;	// IMP=0x000000000000e0e5
- (void)_reportUserDomainConcepts;	// IMP=0x000000000000dfef
- (void)_logAndAndAppendFormat:(id)arg1;	// IMP=0x000000000000deba
- (void)_reportReachabilityFlags:(unsigned int)arg1;	// IMP=0x000000000000d998
- (void)_reportNetworkReachabilityForEnvironment:(id)arg1;	// IMP=0x000000000000d8d3
- (id)_valueForDaemonDefaultKey:(id)arg1 healthStore:(id)arg2;	// IMP=0x000000000000d5be
- (void)_appendDateStringForDefaultKey:(id)arg1 tableFormatter:(id)arg2 healthStore:(id)arg3;	// IMP=0x000000000000d4a5
- (void)_reportForOntologyUserDefaultsWithHealthStore:(id)arg1;	// IMP=0x000000000000d289
- (void)_reportDomain:(id)arg1 keyValues:(id)arg2;	// IMP=0x000000000000ceb7
- (void)_reportForOntologyKeyValueDomainsWithDatabase:(id)arg1;	// IMP=0x000000000000cdfe
- (void)_reportForOntologyKeyValueDomains;	// IMP=0x000000000000ccec
- (void)_reportForShardRequirementStatuses:(id)arg1;	// IMP=0x000000000000ca0c
- (void)_reportForOntologyFeaturesWithOntologyStore:(id)arg1;	// IMP=0x000000000000c813
- (void)_reportOntologyMetadataForDatabase:(id)arg1;	// IMP=0x000000000000c5b4
- (void)_reportElementCountsBySlot:(id)arg1 entriesBySlot:(id)arg2;	// IMP=0x000000000000c0e5
- (id)_entriesForSlots:(id)arg1 database:(id)arg2;	// IMP=0x000000000000beee
- (id)_expandResultsToIndividualSlots:(id)arg1;	// IMP=0x000000000000ba39
- (id)_countOfElementsPerSlotInDatabase:(id)arg1;	// IMP=0x000000000000b83c
- (void)_reportElementCountsBySlotForDatabase:(id)arg1;	// IMP=0x000000000000b750
- (void)_reportShardRegistryForDatabase:(id)arg1;	// IMP=0x000000000000aa76
- (void)_reportBasicChecksForDatabase:(id)arg1;	// IMP=0x000000000000a95c
- (void)_reportForOntologyDatabase:(id)arg1;	// IMP=0x000000000000a8e7
- (void)_reportForOntologyDatabase;	// IMP=0x000000000000a754
- (void)_reportOntologyHostURLWithOntologyStore:(id)arg1;	// IMP=0x000000000000a50c
- (void)_reportLocaleAndRegion;	// IMP=0x000000000000a416
- (void)run;	// IMP=0x000000000000a1ec
- (id)reportFilename;	// IMP=0x000000000000a1df

@end

