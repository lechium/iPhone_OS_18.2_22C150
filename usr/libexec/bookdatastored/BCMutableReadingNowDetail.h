//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableReadingNowDetail
{
    _Bool _isTrackedAsRecent;	// 8 = 0x8
    NSString *_assetID;	// 16 = 0x10
    NSDate *_lastEngagedDate;	// 24 = 0x18
    NSString *_cloudAssetType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000006a6b4
- (void).cxx_destruct;	// IMP=0x000000000006a96f
@property(copy, nonatomic) NSString *cloudAssetType; // @synthesize cloudAssetType=_cloudAssetType;
@property(copy, nonatomic) NSDate *lastEngagedDate; // @synthesize lastEngagedDate=_lastEngagedDate;
@property(nonatomic) _Bool isTrackedAsRecent; // @synthesize isTrackedAsRecent=_isTrackedAsRecent;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006a7b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006a6bc
- (id)configuredRecordFromAttributes;	// IMP=0x001000000006a4e0
- (id)zoneName;	// IMP=0x001000000006a4cc
- (id)identifier;	// IMP=0x001000000006a4ba
- (id)recordType;	// IMP=0x001000000006a4ad
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000006a215
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000006a04a
- (id)initWithAssetID:(id)arg1;	// IMP=0x0010000000069f86

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

