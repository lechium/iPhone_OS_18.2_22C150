//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSEntityMigrationPolicy.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC28SiriPrivateLearningAnalytics39GroundTruthModelV3toV4CoreDataMigration : NSEntityMigrationPolicy
{
    MISSING_TYPE *messagesGroundTruthName;	// 8 = 0x8
    MISSING_TYPE *promptGroundTruthName;	// 24 = 0x18
    MISSING_TYPE *promptTaskAttribute;	// 40 = 0x28
    MISSING_TYPE *messagesSiriKitTaskName;	// 56 = 0x38
    MISSING_TYPE *suggestionOutcomeGroundTruthName;	// 72 = 0x48
    MISSING_TYPE *suggestionOutcomDomainAttribute;	// 88 = 0x58
    MISSING_TYPE *messagesDomainEnumValue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000d1610
- (id)init;	// IMP=0x00000000000d15c0
- (_Bool)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000d11d0

@end
