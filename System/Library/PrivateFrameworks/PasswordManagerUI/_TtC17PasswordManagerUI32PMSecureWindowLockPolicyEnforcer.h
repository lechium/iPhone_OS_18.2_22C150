//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC17PasswordManagerUI32PMSecureWindowLockPolicyEnforcer : _TtCs12_SwiftObject
{
    MISSING_TYPE *activeLockableViewIDs;	// 16 = 0x10
    MISSING_TYPE *didUserCancelLastAuthAttempt;	// 24 = 0x18
    MISSING_TYPE *_hasBeenAuthenticated;	// 0 = 0x0
    MISSING_TYPE *_isAuthenticating;	// 0 = 0x0
    MISSING_TYPE *isUsingSystemProtection;	// 0 = 0x0
}

- (void)systemProtectionDidChange:(id)arg1;	// IMP=0x00000000002d3a40
- (void)appDidEnterBackground:(id)arg1;	// IMP=0x00000000002d38e0
- (void)appDidBecomeActive:(id)arg1;	// IMP=0x00000000002d3840

@end

