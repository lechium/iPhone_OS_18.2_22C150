//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14DeviceActivity28DeviceActivityMonitorContext : NSExtensionContext
{
    MISSING_TYPE *$__lazy_storage_$_monitor;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000069400
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00100000000693e0
- (void).cxx_destruct;	// IMP=0x0000000000069c80
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x0000000000069b80
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;	// IMP=0x0000000000069970
- (id)initWithInputItems:(id)arg1;	// IMP=0x00000000000697f0
- (id)init;	// IMP=0x0000000000069710
- (void)eventWillReachThresholdWarning:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069640
- (void)intervalWillEndWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069590
- (void)intervalWillStartWarningForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069570
- (void)eventDidUnreachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069550
- (void)eventDidReachThreshold:(id)arg1 activity:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069530
- (void)intervalDidEndForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069510
- (void)intervalDidStartForActivity:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000694f0

@end
