//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

@class NSArray, NSCountedSet, NSHashTable, NSMapTable, NSString, _UIGenericGestureHIDEventDescriptor;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIPencilEvent : UIEvent
{
    unsigned long long _senderID;	// 56 = 0x38
    long long _subtype;	// 64 = 0x40
    id <BSInvalidatable> _stateCaptureToken;	// 72 = 0x48
    unsigned long long _phase;	// 80 = 0x50
    double _normalizedForceVelocity;	// 88 = 0x58
    NSHashTable *_registeredInteractions;	// 96 = 0x60
    NSCountedSet *_countedWindowPointerWithInteractionsWantingFocus;	// 104 = 0x68
    NSMapTable *_deliveryRecordsByDescriptor;	// 112 = 0x70
    _UIGenericGestureHIDEventDescriptor *_continuousEventDescriptorForDispatch;	// 120 = 0x78
    NSArray *_interactionsForDispatch;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000013b594c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000013b515a
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000013b510a
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000013b50ba
- (id)succinctDescriptionBuilder;	// IMP=0x00000000013b4f5e
- (id)succinctDescription;	// IMP=0x00000000013b4f0e
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)_cloneEvent;	// IMP=0x00000000013b4edb
- (long long)subtype;	// IMP=0x00000000013b4eca
- (long long)type;	// IMP=0x00000000013b4ebf
- (void)_cleanupAfterDispatch;	// IMP=0x00000000013b4dc1
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000013b43aa
- (void)dealloc;	// IMP=0x00000000013b2aab
- (id)_init;	// IMP=0x00000000013b2a22

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
