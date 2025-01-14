//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXEditAppliedCompositionAction.h>

@class PIBrushStrokeHistory;

__attribute__((visibility("hidden")))
@interface PUCleanupCompositionAction : PXEditAppliedCompositionAction
{
    PIBrushStrokeHistory *_beforeBrushHistory;	// 8 = 0x8
    PIBrushStrokeHistory *_afterBrushHistory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000291469
@property(retain, nonatomic) PIBrushStrokeHistory *afterBrushHistory; // @synthesize afterBrushHistory=_afterBrushHistory;
@property(retain, nonatomic) PIBrushStrokeHistory *beforeBrushHistory; // @synthesize beforeBrushHistory=_beforeBrushHistory;
- (void)performRedo:(CDUnknownBlockType)arg1;	// IMP=0x000000000029137c
- (void)performUndo:(CDUnknownBlockType)arg1;	// IMP=0x00000000002912d9
- (id)initWithCompositionController:(id)arg1 sourceComposition:(id)arg2 previousBrushHistory:(id)arg3;	// IMP=0x0000000000291212

@end

