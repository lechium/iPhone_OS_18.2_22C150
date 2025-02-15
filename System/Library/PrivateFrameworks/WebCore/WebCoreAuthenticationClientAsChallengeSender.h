//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAuthenticationClientAsChallengeSender : NSObject
{
    struct AuthenticationClient *m_client;	// 8 = 0x8
}

- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x00000000010bb3b0
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000010bb320
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x00000000010bb1d0
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x00000000010bb140
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x00000000010bb040
- (void)detachClient;	// IMP=0x00000000010bb030
- (struct AuthenticationClient *)client;	// IMP=0x00000000010bb020
- (id)initWithAuthenticationClient:(struct AuthenticationClient *)arg1;	// IMP=0x00000000010baff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

