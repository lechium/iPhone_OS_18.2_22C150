//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNLaunchServices, NSString;

@interface CNLaunchServicesProxyServiceDelegate : NSObject
{
    CNLaunchServices *_launchServices;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001147c
@property(retain, nonatomic) CNLaunchServices *launchServices; // @synthesize launchServices=_launchServices;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000113c4
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011327
- (void)applicationForBundleIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001127c
- (void)defaultApplicationForDefaultAppCategory:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000111b3
- (void)applicationsAvailableForDefaultAppCategory:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011112
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011067
- (void)applicationsForUserActivityType:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010fbc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000010e5f
- (id)initWithLaunchServices:(id)arg1;	// IMP=0x0010000000010de1
- (id)init;	// IMP=0x0010000000010da1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
