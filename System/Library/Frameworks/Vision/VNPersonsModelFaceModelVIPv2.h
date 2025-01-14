//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMapTable;

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModelVIPv2
{
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;	// 8 = 0x8
    NSDictionary *_cachedPersonUniqueIdentifierToFaceprintCountMapping;	// 16 = 0x10
    shared_ptr_8c39738b _faceIDModel;	// 24 = 0x18
    unsigned long long _faceprintRequestRevision;	// 40 = 0x28
    int _maximumElementsPerID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000233561
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0060000000233553
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000232938
+ (shared_ptr_099ccdd3)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr_099ccdd3)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(void *)arg4 error:(id *)arg5;	// IMP=0x006000000023250a
- (id).cxx_construct;	// IMP=0x00000000002316c3
- (void).cxx_destruct;	// IMP=0x0000000000231681
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002314b6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023108f
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000230e95
- (id)faceCountsForAllPersons;	// IMP=0x0000000000230c52
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;	// IMP=0x00000000002309d4
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000230910
- (id)personUniqueIdentifiers;	// IMP=0x0000000000230756
- (unsigned long long)personCount;	// IMP=0x0000000000230739
- (unsigned long long)faceprintRequestRevision;	// IMP=0x0000000000230728
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const void *)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x000000000023042d
- (id)_personPredictionsForFace:(id)arg1 withDescriptor:(const void *)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(struct CVMLCanceller *)arg4 error:(id *)arg5;	// IMP=0x000000000022ff82
- (_Bool)_getSerialNumber:(int *)arg1 forPersonUniqueIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022fce7
- (id)initWithFaceIDModel:(shared_ptr_8c39738b)arg1 faceprintRequestRevision:(unsigned long long)arg2 maximumElementsPerID:(unsigned long long)arg3 personUniqueIdentifierToSerialNumberMapping:(id)arg4;	// IMP=0x000000000022fb58

@end

