//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectViewEntry.h"

@class _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry
{
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000057a7f5
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup; // @synthesize captureGroup=_captureGroup;
- (id)description;	// IMP=0x000000000057a751
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x000000000057a749
- (void)removeEffectFromView:(id)arg1;	// IMP=0x000000000057a6fd
- (void)addEffectToView:(id)arg1;	// IMP=0x000000000057a662

@end
