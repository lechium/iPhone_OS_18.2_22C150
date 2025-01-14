//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AIDAAccountManager, NSString, UIViewController;

@interface COSSatellitePairingHelper : NSObject
{
    ACAccountStore *_store;	// 8 = 0x8
    AIDAAccountManager *_accountManager;	// 16 = 0x10
    UIViewController *_alertPresentationViewController;	// 24 = 0x18
}

+ (void)popToLoginControllerFromController:(id)arg1;	// IMP=0x00200000000e2b6a
- (void).cxx_destruct;	// IMP=0x00200000000e30ce
@property(nonatomic) __weak UIViewController *alertPresentationViewController; // @synthesize alertPresentationViewController=_alertPresentationViewController;
- (id)accountsForAccountManager:(id)arg1;	// IMP=0x00100000000e2a09
- (id)_accountManager;	// IMP=0x00100000000e28e8
- (id)_familyEligibilityRequester;	// IMP=0x00100000000e287f
- (void)_finishedWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e1e0c
- (void)_checkFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e1a75
- (void)checkPairingPreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e0cb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

