//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NavdLocationAuthorizationMonitor : NSObject
{
    NSMutableDictionary *_authStatusDictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedMonitor;	// IMP=0x004000000000fb60
- (void).cxx_destruct;	// IMP=0x00200000000104b1
- (_Bool)isAuthorizedForLocationWithClientBundleIdentifier:(id)arg1;	// IMP=0x001000000001001f
- (int)_q_getAuthorizationForLocationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000000fe1c
- (void)_reset;	// IMP=0x001000000000fdbb
- (void)_q_reset;	// IMP=0x001000000000fd2d
- (id)init;	// IMP=0x001000000000fbb5

@end

