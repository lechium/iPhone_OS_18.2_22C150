//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKMousePointerController, BKMousePointerServiceServer, NSString;

@interface BKHIDMousePointerEventProcessor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BKMousePointerController *_mousePointerController;	// 16 = 0x10
    BKMousePointerServiceServer *_mousePointerServiceServer;	// 24 = 0x18
    int _assistiveTouchNotificationToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000038182
@property(readonly, nonatomic) BKMousePointerController *mousePointerController;
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0010000000038124
- (id)init;	// IMP=0x0010000000038040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

