//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIDragInteraction, UIDragItem, UITargetedDragPreview;
@protocol UIDragAnimating, UIDragSession;

@protocol _UIDragInteractionPresentationDelegate <NSObject>
- (void)_dragInteractionPresentation:(UIDragInteraction *)arg1 sessionDidEnd:(id <UIDragSession>)arg2 withoutBeginning:(_Bool)arg3;
- (void)_dragInteractionPresentation:(UIDragInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateCancelWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)_dragInteractionPresentation:(UIDragInteraction *)arg1 previewForCancellingItem:(UIDragItem *)arg2 defaultPreview:(UITargetedDragPreview *)arg3 proposedPreview:(UITargetedDragPreview *)arg4;
@end
