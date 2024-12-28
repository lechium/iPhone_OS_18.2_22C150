//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSPrivacyInfoCenter : NSObject
{
    int _registrationToken;	// 8 = 0x8
    long long _accountAccessStatus;	// 16 = 0x10
}

+ (id)sharedPrivacyInfoCenter;	// IMP=0x001000000006bc4b
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(nonatomic) long long accountAccessStatus; // @synthesize accountAccessStatus=_accountAccessStatus;
- (void)profileConnectionSettingsChanged:(id)arg1;	// IMP=0x000000000006c235
- (void)profileConnectionProfileChanged:(id)arg1;	// IMP=0x000000000006c22f
- (id)updateAccountAccessStatusWithError:(id)arg1;	// IMP=0x000000000006c131
- (void)updateAccountAccessStatusWithResponse:(id)arg1;	// IMP=0x000000000006c0db
- (void)_invalidateAccountAccessStatus;	// IMP=0x000000000006c0c7
- (void)dealloc;	// IMP=0x000000000006c004
- (id)init;	// IMP=0x000000000006bca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
