//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModelVIPv3
{
    shared_ptr_d8728072 _faceIDModel;	// 8 = 0x8
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    NSArray *_entityUniqueIdentifiers;	// 32 = 0x20
    NSArray *_entityPrintCounts;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002dc06c
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00600000002dadfd
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00600000002dadef
- (id).cxx_construct;	// IMP=0x00000000002da23b
- (void).cxx_destruct;	// IMP=0x00000000002da1e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d9ff5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d9acf
- (id)printCountsForAllEntities;	// IMP=0x00000000002d99d5
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000002d9852
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002d978f
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000002d9772
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002d9755
- (id)entityUniqueIdentifiers;	// IMP=0x00000000002d9740
- (unsigned long long)entityCount;	// IMP=0x00000000002d9723
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002d9136
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002d8e48
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x00000000002d8e33
- (id)initWithFaceIDModel:(shared_ptr_d8728072)arg1 entityPrintOriginatingRequestSpecifier:(id)arg2 entityUniqueIdentifiers:(id)arg3 entityPrintCounts:(id)arg4;	// IMP=0x00000000002d8c89

@end

