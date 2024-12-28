//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputAxis2DInput
{
    unsigned long long _sourcesSlot;	// 8 = 0x8
    unsigned long long _isAnalogSlot;	// 16 = 0x10
    unsigned long long _canWrapSlot;	// 24 = 0x18
    unsigned long long _valueChangedHandlerSlot;	// 32 = 0x20
    unsigned long long _valueSlot;	// 40 = 0x28
    unsigned long long _valueTimestampSlot;	// 48 = 0x30
}

+ (unsigned short)updateContextSize;	// IMP=0x0010000000053502
@property(readonly, copy) NSSet *sources;
@property(readonly) double lastValueLatency;
@property(readonly) double lastValueTimestamp;
@property(readonly) _Bool canWrap;
@property(readonly, getter=isAnalog) _Bool analog;
@property(readonly) struct GCPoint2 value;
@property(copy) CDUnknownBlockType valueDidChangeHandler;
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x000000000005398e
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x0000000000053869
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x0000000000053536
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x0000000000053382
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000531f6
- (id)init;	// IMP=0x00000000000531d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
