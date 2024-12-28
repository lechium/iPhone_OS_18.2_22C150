//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModel : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002e2f7c
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00100000002e2e13
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000002e2dcf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e3111
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e306c
- (id)printCountsForAllEntities;	// IMP=0x00000000002e305f
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000002e3052
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002e304a
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002e3042
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e3029
- (id)entityUniqueIdentifiers;	// IMP=0x00000000002e301c
- (unsigned long long)entityCount;	// IMP=0x00000000002e3014
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002e2fd0
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e2f8c
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x00000000002e2f84

@end
