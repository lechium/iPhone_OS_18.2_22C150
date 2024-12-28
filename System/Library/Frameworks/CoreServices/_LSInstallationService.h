//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallationService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

+ (void)beginListening;	// IMP=0x0010000000161087
- (void).cxx_destruct;	// IMP=0x00000000001612a9
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001611da
- (id)init;	// IMP=0x000000000016116c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
