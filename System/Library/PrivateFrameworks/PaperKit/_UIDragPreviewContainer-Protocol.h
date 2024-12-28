//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/NSObject-Protocol.h>

@class UIView;
@protocol UIDragAnimating;

@protocol _UIDragPreviewContainer <NSObject>
- (void)_animateDropAlongsideAnimator:(id <UIDragAnimating>)arg1 completion:(void (^)(void))arg2;
- (void)_animateLiftCancellationAlongsideAnimator:(id <UIDragAnimating>)arg1 completion:(void (^)(void))arg2;
- (void)_animateLiftAlongsideAnimator:(id <UIDragAnimating>)arg1 completion:(void (^)(void))arg2;
- (void)_preparePreviewContainerWithPreview:(UIView *)arg1 source:(UIView *)arg2 initialTransform:(struct CGAffineTransform)arg3;
@end
