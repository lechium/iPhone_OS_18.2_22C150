//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSData, NSString, NSUUID;

@interface REMCDManualSortHint
{
    MISSING_TYPE *separatorInConcatenatedContainerIDsWithLocalContainerIDPrefix;	// 8 = 0x8
    MISSING_TYPE *separatorInConcatenatedElementIDsWithLocalElementIDPrefix;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x002000000026e760
+ (_Bool)isAbstract;	// IMP=0x001000000026e750
+ (id)cdEntityName;	// IMP=0x001000000026e640
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x00100000004e8450
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x00100000004e5a50
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x00100000004e55f0
+ (id)recordTypes;	// IMP=0x00100000004e54f0
- (void).cxx_destruct;	// IMP=0x002000000026e860
- (void).cxx_construct;	// IMP=0x001000000026e820
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x001000000026e7a0
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000026e790
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000026e6b0
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000004e86f0
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000004e84c0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000004e8460
- (id)parentCloudObject;	// IMP=0x00100000004e8410
- (id)newlyCreatedRecord;	// IMP=0x00100000004e83e0
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000004e6ab0
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x00100000004e5b50
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000004e5b40
- (id)recordType;	// IMP=0x00100000004e5b10
- (id)recordZoneName;	// IMP=0x00100000004e5ad0

// Remaining properties
@property(nonatomic, copy) NSString *concatenatedContainerIDsWithLocalContainerIDPrefix; // @dynamic concatenatedContainerIDsWithLocalContainerIDPrefix;
@property(nonatomic, copy) NSString *concatenatedElementIDsWithLocalElementIDPrefix; // @dynamic concatenatedElementIDsWithLocalElementIDPrefix;
@property(nonatomic, copy) NSUUID *eTag; // @dynamic eTag;
@property(nonatomic, copy) NSData *hintData; // @dynamic hintData;
@property(nonatomic) int lastAccessedSinceReferenceDate; // @dynamic lastAccessedSinceReferenceDate;
@property(nonatomic, copy) NSString *listID; // @dynamic listID;
@property(nonatomic) short listTypeRawValue; // @dynamic listTypeRawValue;
@property(nonatomic) short serializationVersion; // @dynamic serializationVersion;

@end
