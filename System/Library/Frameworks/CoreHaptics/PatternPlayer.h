//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVHapticPlayerChannel, NSString;

__attribute__((visibility("hidden")))
@interface PatternPlayer
{
    AVHapticPlayerChannel *_channel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004100
@property _Bool isMuted;
- (_Bool)startAtTime:(double)arg1 withImmediateParameters:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003ab7
- (_Bool)scheduleParameterCurve:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x00000000000035e4
- (_Bool)cancelAndReturnError:(id *)arg1;	// IMP=0x0000000000003247
- (_Bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id *)arg3;	// IMP=0x0000000000002e89
- (_Bool)stopAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000002a8a
- (_Bool)startAtTime:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000025c2
- (void)clearExternalResources:(id)arg1;	// IMP=0x000000000000234f
- (void)doSetMute:(_Bool)arg1;	// IMP=0x00000000000021ed
- (void)dealloc;	// IMP=0x0000000000002029
- (id)initWithPlayable:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000001669
- (id)processImmediateParameters:(id)arg1;	// IMP=0x00000000000011df
- (void)releaseExternalResources:(id)arg1 events:(id)arg2;	// IMP=0x0000000000000ede
- (id)init;	// IMP=0x0000000000000ed0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

