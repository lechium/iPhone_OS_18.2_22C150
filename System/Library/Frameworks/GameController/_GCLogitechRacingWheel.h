//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCRacingWheel.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GCLogitechRacingWheel : GCRacingWheel
{
    struct __IOHIDDevice *_device;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _isOpen;	// 24 = 0x18
    int _mode;	// 28 = 0x1c
    union {
        struct LogitechWheelG920Report g920;
        struct LogitechWheelG29ClassicReport g29Classic;
        unsigned char raw[64];
    } _report;	// 32 = 0x20
    NSArray *_eventObservers;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000279e0
- (id)observeGamepadEvents:(CDUnknownBlockType)arg1;	// IMP=0x00000000000276f4
- (_Bool)isAcquired;	// IMP=0x00000000000276e4
- (void)relinquishDevice;	// IMP=0x00000000000276b7
- (_Bool)acquireDeviceWithError:(id *)arg1;	// IMP=0x00000000000273e9
- (void)dealloc;	// IMP=0x000000000002738c
- (id)initWithService:(unsigned int)arg1;	// IMP=0x00000000000246cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
