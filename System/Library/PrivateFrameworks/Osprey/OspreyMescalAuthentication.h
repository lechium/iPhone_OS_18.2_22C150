//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, OspreyAuthService, OspreyConnectionPreferences, OspreyGRPCChannel, OspreyMescalSession;

__attribute__((visibility("hidden")))
@interface OspreyMescalAuthentication : NSObject
{
    OspreyMescalSession *_mescalSession;	// 8 = 0x8
    OspreyAuthService *_authService;	// 16 = 0x10
    OspreyConnectionPreferences *_connectionPreferences;	// 24 = 0x18
    OspreyGRPCChannel *_grpcChannel;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    NSDate *_sessionExpiration;	// 48 = 0x30
    NSData *_certificateData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000d66b
- (void)_continuePreparationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d0fd
- (void)signData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ceee
- (_Bool)isSessionExpired;	// IMP=0x000000000000ce90
- (void)moveToState:(unsigned long long)arg1;	// IMP=0x000000000000cd93
- (id)mescalSession;	// IMP=0x000000000000cd58
- (unsigned long long)state;	// IMP=0x000000000000cd4e
- (unsigned long long)authenticationStrategyVersion;	// IMP=0x000000000000cd43
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2;	// IMP=0x000000000000cc50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
