//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudChangeTokenController, NSString;
@protocol BDSCloudKitSupportZoneRecovery;

@interface BDSSaltVersionIdentifierManager : NSObject
{
    NSObject<BDSCloudKitSupportZoneRecovery> *_zoneDataManager;	// 8 = 0x8
    BCCloudChangeTokenController *_tokenController;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000868a5
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(nonatomic) __weak BCCloudChangeTokenController *tokenController; // @synthesize tokenController=_tokenController;
@property(nonatomic) __weak NSObject<BDSCloudKitSupportZoneRecovery> *zoneDataManager; // @synthesize zoneDataManager=_zoneDataManager;
@property(readonly, copy) NSString *description;
- (void)handleSaltVersionIdentifierChange:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000085b08
- (void)databaseController:(id)arg1 saltVersionIdentifierChanged:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000085af0
- (id)initWithZoneDataManager:(id)arg1 tokenController:(id)arg2 databaseController:(id)arg3;	// IMP=0x0010000000085900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
