//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDirectTouchPerDisplayInfo, BKDirectTouchState, BKHIDDirectTouchEventProcessor, BKTouchDeliveryPolicyServer, NSString;

@interface BKDirectTouchStateHitTester : NSObject
{
    BKTouchDeliveryPolicyServer *_touchDeliveryPolicyServer;	// 8 = 0x8
    BKDirectTouchState *_state;	// 16 = 0x10
    BKHIDDirectTouchEventProcessor *_eventProcessor;	// 24 = 0x18
    BKDirectTouchPerDisplayInfo *_displayInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009d4cc
- (void)invalidate;	// IMP=0x001000000009d46d
- (void)dealloc;	// IMP=0x001000000009d269

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
