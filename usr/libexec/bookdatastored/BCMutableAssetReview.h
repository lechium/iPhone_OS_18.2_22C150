//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetReview
{
    short _starRating;	// 8 = 0x8
    NSString *_assetReviewID;	// 16 = 0x10
    NSString *_reviewTitle;	// 24 = 0x18
    NSString *_reviewBody;	// 32 = 0x20
    NSString *_userID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000006f7c1
- (void).cxx_destruct;	// IMP=0x002000000006faa1
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *reviewBody; // @synthesize reviewBody=_reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle=_reviewTitle;
@property(nonatomic) short starRating; // @synthesize starRating=_starRating;
@property(copy, nonatomic) NSString *assetReviewID; // @synthesize assetReviewID=_assetReviewID;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006f8c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006f7c9
- (id)configuredRecordFromAttributes;	// IMP=0x001000000006f6aa
- (id)zoneName;	// IMP=0x001000000006f696
@property(nonatomic) double normalizedStarRating;
- (id)identifier;	// IMP=0x001000000006f5a1
- (id)recordType;	// IMP=0x001000000006f594
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000006f33a
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000006f16e
- (id);	// IMP=0x001000000006f0aa

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

