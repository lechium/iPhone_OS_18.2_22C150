//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

__attribute__((visibility("hidden")))
@interface _FPParentProgress : NSProgress
{
    FPProgressProxy *_progressProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000045ea5
@property(readonly) FPProgressProxy *progressProxy; // @synthesize progressProxy=_progressProxy;
- (void)setProgressProxy:(id)arg1;	// IMP=0x0000000000045ce1
- (_Bool)isPausable;	// IMP=0x0000000000045cc4
- (_Bool)isCancellable;	// IMP=0x0000000000045ca7
- (void)dealloc;	// IMP=0x0000000000045c5e

@end

