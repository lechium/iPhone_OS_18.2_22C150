//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit31StickerDragPreviewContainerView : UIView
{
    MISSING_TYPE *isDropAnimation;	// 8 = 0x8
    MISSING_TYPE *isLifted;	// 9 = 0x9
    MISSING_TYPE *meshView;	// 16 = 0x10
    MISSING_TYPE *transformView;	// 24 = 0x18
    MISSING_TYPE *shineView;	// 32 = 0x20
    MISSING_TYPE *shadowView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006fe60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006fe00
- (void)_animateDropAlongsideAnimator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f330
- (void)_animateLiftCancellationAlongsideAnimator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006f200
- (void)_animateLiftAlongsideAnimator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ef70
- (void)_preparePreviewContainerWithPreview:(id)arg1 source:(id)arg2 initialTransform:(struct CGAffineTransform)arg3;	// IMP=0x000000000006eda0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006ecf0

@end

