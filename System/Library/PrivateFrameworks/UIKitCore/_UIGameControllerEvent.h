//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

__attribute__((visibility("hidden")))
@interface _UIGameControllerEvent : UIEvent
{
    CDStruct_a7a14e3b _previousState;	// 56 = 0x38
    unsigned long long _activeComponent;	// 288 = 0x120
    _Bool _beginningInputStream;	// 296 = 0x128
    int _responderDeliveryPolicy;	// 300 = 0x12c
}

- (_Bool)_processShoulder:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c7d0b
- (_Bool)_processRightStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c7ca9
- (_Bool)_processLeftStick:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c7c47
- (_Bool)_processDPad:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c7bec
- (_Bool)_processStandardButtons:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c78f9
- (_Bool)_determineInputTypeAndProcess:(CDStruct_a7a14e3b *)arg1 pressesEvent:(id)arg2 timestamp:(double)arg3;	// IMP=0x00000000013c70b5
- (struct CGPoint)_leftStickPosition;	// IMP=0x00000000013c709c
- (void)_maybeConvertAndSendAsPressesEvent;	// IMP=0x00000000013c6d2c
- (void)_reset;	// IMP=0x00000000013c6cb0
- (void)_sendEventToResponder:(id)arg1;	// IMP=0x00000000013c6c95
- (long long)subtype;	// IMP=0x00000000013c6c8d
- (long long)type;	// IMP=0x00000000013c6c82
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000013c6bac

@end
