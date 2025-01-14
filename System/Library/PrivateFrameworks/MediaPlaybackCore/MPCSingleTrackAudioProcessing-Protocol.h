//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCModelGenericAVItem;
@protocol MPCSingleTrackAudioProcessing;

@protocol MPCSingleTrackAudioProcessing
@property(retain, nonatomic) id <MPCSingleTrackAudioProcessing> selfRef;
- (void)recreateAudioTap;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg1;
- (void)processTap:(struct opaqueMTAudioProcessingTap *)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList *)arg5 numberFramesOut:(long long *)arg6 flagsOut:(unsigned int *)arg7;
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg1;
- (void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;
- (_Bool)shouldAttachAudioTapToItem:(MPCModelGenericAVItem *)arg1;
@end

