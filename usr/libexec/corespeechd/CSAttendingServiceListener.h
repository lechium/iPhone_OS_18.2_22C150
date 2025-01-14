//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttendingStatesProvidingProxy, CSAttendingUsecaseManager, NSMutableArray, NSString, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CSAttendingServiceListener : NSObject
{
    CSAttendingUsecaseManager *_attendingUsecaseManager;	// 8 = 0x8
    CSAttendingStatesProvidingProxy *_attendingStatesProvidingProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
    NSXPCInterface *_exportedInterface;	// 40 = 0x28
    NSXPCInterface *_remoteInterface;	// 48 = 0x30
    NSMutableArray *_proxies;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000d4e8f
@property(retain, nonatomic) NSMutableArray *proxies; // @synthesize proxies=_proxies;
@property(retain, nonatomic) NSXPCInterface *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, setter=registerAttendingStatesProvidingProxy:) __weak CSAttendingStatesProvidingProxy *attendingStatesProvidingProxy; // @synthesize attendingStatesProvidingProxy=_attendingStatesProvidingProxy;
@property(nonatomic, setter=registerAttendingUsecaseManager:) __weak CSAttendingUsecaseManager *attendingUsecaseManager; // @synthesize attendingUsecaseManager=_attendingUsecaseManager;
- (void)resumeConnection;	// IMP=0x00100000000d4d1c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000d4928
- (void)dealloc;	// IMP=0x00100000000d4879
- (id)init;	// IMP=0x00100000000d46a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

