//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface SYBacklinkIndicatorUsageService : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0010000000038493
+ (void)beginObservingUsage;	// IMP=0x0010000000038478
+ (id)_listenerEndpoint;	// IMP=0x001000000003891b
+ (void)set_testingDelegate:(id)arg1;	// IMP=0x0010000000038907
+ (id)_testingDelegate;	// IMP=0x00100000000388f6
- (void).cxx_destruct;	// IMP=0x00000000000388e6
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (oneway void)didDismissBacklinkItemWithIdentifier:(id)arg1;	// IMP=0x0000000000038846
- (oneway void)didActivateBacklinkItemWithIdentifier:(id)arg1;	// IMP=0x00000000000387c1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000003867f
- (void)dealloc;	// IMP=0x0000000000038625
- (id)init;	// IMP=0x00000000000384e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
