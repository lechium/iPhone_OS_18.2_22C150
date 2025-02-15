//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@interface AppUpdateMemoryEntity
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_itemID;	// 16 = 0x10
    NSNumber *_evid;	// 24 = 0x18
    long long _parentalControlsRank;	// 32 = 0x20
    NSDate *_releaseDate;	// 40 = 0x28
}

+ (id)defaultProperties;	// IMP=0x00200000001906df
+ (Class)databaseEntityClass;	// IMP=0x00100000001906ce
- (void).cxx_destruct;	// IMP=0x00200000001907c2
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) long long parentalControlsRank; // @synthesize parentalControlsRank=_parentalControlsRank;
- (id)purchaseInfoForUpdateUserInitiated:(_Bool)arg1;	// IMP=0x001000000019078e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019069f
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long softwarePlatform;
- (void)setUpdateState:(long long)arg1;	// IMP=0x0010000000190520
@property(nonatomic, getter=isPerDevice) _Bool perDevice;
- (void)setMetricsData:(id)arg1;	// IMP=0x00100000001904ad
@property(nonatomic) NSDate *installDate;
@property(nonatomic, getter=isCodeSignatureUpdate) _Bool codeSignatureUpdate;
@property(nonatomic, getter=isBackground) _Bool background;
@property(nonatomic, getter=isOffloaded) _Bool offloaded;
- (id)rawUpdateDictionary;	// IMP=0x001000000019036d
@property(readonly, nonatomic) NSString *parentalControlsName;
@property(readonly, nonatomic) long long packageType;
@property(readonly, nonatomic, getter=isAppClip) _Bool appClip;
@property(readonly, nonatomic) NSNumber *itemIdentifier;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(readonly, nonatomic) NSDate *currentVersionReleaseDate;
@property(readonly, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithUpdateDictionary:(id)arg1;	// IMP=0x001000000018f2d1
- (id)init;	// IMP=0x001000000018f2a2
- (id)purchase_purchaseInfoForUpdateUserInitiated:(_Bool)arg1;	// IMP=0x001000000021fbdf

// Remaining properties
@property(nonatomic) long long databaseID;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

