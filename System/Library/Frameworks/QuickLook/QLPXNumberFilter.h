//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface QLPXNumberFilter
{
    struct {
        _Bool output;
    } _needsUpdateFlags;	// 8 = 0x8
    double _input;	// 16 = 0x10
    double _time;	// 24 = 0x18
    double _output;	// 32 = 0x20
    double _lastTime;	// 40 = 0x28
}

@property(readonly, nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic, setter=_setOutput:) double output; // @synthesize output=_output;
@property(nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) double input; // @synthesize input=_input;
- (void)_updateOutputIfNeeded;	// IMP=0x00000000000526de
- (void)_invalidateOutput;	// IMP=0x00000000000526c1
- (void)_updateIfNeeded;	// IMP=0x000000000005268a
- (void)_setNeedsUpdate;	// IMP=0x0000000000052676
- (_Bool)_needsUpdate;	// IMP=0x0000000000052666
- (void)invalidateOutput;	// IMP=0x0000000000052604
@property(readonly, nonatomic) double currentTime;
- (void)setInput:(double)arg1;	// IMP=0x0000000000052552
- (void)_setLastTime:(double)arg1;	// IMP=0x0000000000052540
- (void)didPerformChanges;	// IMP=0x00000000000524ff
- (id)mutableChangeObject;	// IMP=0x00000000000524f6
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000524c7
- (double)updatedOutput;	// IMP=0x000000000005248c
- (double)initialOutputForInput:(double)arg1;	// IMP=0x0000000000052486
- (id)initWithInput:(double)arg1;	// IMP=0x0000000000052418
- (id)init;	// IMP=0x0000000000052403

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

