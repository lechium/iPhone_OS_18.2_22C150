//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationPushRegistrar : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedRegistrar;	// IMP=0x004000000070dc8e
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)setLocationPushesActive:(_Bool)arg1 forAppBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000070e1f3
- (void)registerForPushToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000070e154
- (void)connect;	// IMP=0x001000000070dd0e
- (void)dealloc;	// IMP=0x001000000070dcd3

@end

