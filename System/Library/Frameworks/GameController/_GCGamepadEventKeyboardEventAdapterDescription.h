//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _GCGamepadEventKeyboardEventAdapter, _GCGamepadEventKeyboardEventAdapterConfig;
@protocol _GCKeyboardEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventKeyboardEventAdapterDescription : NSObject
{
    _GCGamepadEventKeyboardEventAdapterConfig *_config;	// 8 = 0x8
    id <_GCKeyboardEventSourceDescription> _sourceDescription;	// 16 = 0x10
    _GCGamepadEventKeyboardEventAdapter *_materializedObject;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d65f0
- (void).cxx_destruct;	// IMP=0x00000000000d68b7
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000d680a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d679d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d66b4
- (id)init;	// IMP=0x00000000000d6691
- (id)initWithConfiguration:(id)arg1 source:(id)arg2;	// IMP=0x00000000000d65f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
