//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface IPLocalizationSwitcherServiceDelegate : NSObject
{
    NSObject<OS_xpc_event_publisher> *_publisher;	// 8 = 0x8
    NSMutableSet *_subscribers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000023e2
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *subscribers; // @synthesize subscribers=_subscribers;
@property(retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
- (void)preferredLanguageChangedForBundleID:(id)arg1;	// IMP=0x0010000000001e52
- (void)removeSubscriber:(unsigned long long)arg1;	// IMP=0x0010000000001ddb
- (void)addSubscriber:(unsigned long long)arg1;	// IMP=0x0010000000001d64
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001c13
- (id)init;	// IMP=0x0010000000001b8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

