//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesEditor/NSObject-Protocol.h>

@class NSArray, UIDragItem, UITargetedDragPreview, UIView;
@protocol UIDragAnimating, UIDragSession, UITextDragRequest, UITextDraggable;

@protocol UITextDragDelegate <NSObject>

@optional
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (void)textDraggableView:(UIView<UITextDraggable> *)arg1 willAnimateLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (UITargetedDragPreview *)textDraggableView:(UIView<UITextDraggable> *)arg1 dragPreviewForLiftingItem:(UIDragItem *)arg2 session:(id <UIDragSession>)arg3;
- (NSArray *)textDraggableView:(UIView<UITextDraggable> *)arg1 itemsForDrag:(id <UITextDragRequest>)arg2;
@end

