//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface RDDefaults : NSObject
{
    long long _resendArchivesDelay;	// 8 = 0x8
    double _appRuntimeAssertionDuration;	// 16 = 0x10
    NSUserDefaults *_defaults;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x0040000000006203
- (void)updateAuthorizationVersions:(id)arg1 forBundleId:(id)arg2;	// IMP=0x0020000000007339
- (void)setAuthorizationVersions:(id)arg1 forBundleId:(id)arg2;	// IMP=0x0010000000007296
- (void)dealloc;	// IMP=0x0010000000006ffb
- (id)init;	// IMP=0x001000000000623e

@end
