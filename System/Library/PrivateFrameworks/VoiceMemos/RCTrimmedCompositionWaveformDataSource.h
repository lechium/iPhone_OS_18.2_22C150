//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RCCompositionWaveformDataSource.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource
{
    NSURL *_destinationWaveformURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000021044
@property(readonly, nonatomic) NSURL *destinationWaveformURL; // @synthesize destinationWaveformURL=_destinationWaveformURL;
- (id)generatedWaveformOutputURL;	// IMP=0x000000000002101e
- (_Bool)preferLoadingFragmentWaveforms;	// IMP=0x0000000000021016
- (id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2 trackIndex:(unsigned long long)arg3;	// IMP=0x0000000000020f7f

@end
