//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/UIViewControllerTransitionCoordinatorContext-Protocol.h>

@class UIView;

@protocol UIViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinatorContext>
- (void)notifyWhenInteractionChangesUsingBlock:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg1;
- (void)notifyWhenInteractionEndsUsingBlock:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg1;
- (_Bool)animateAlongsideTransitionInView:(UIView *)arg1 animation:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg2 completion:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg3;
- (_Bool)animateAlongsideTransition:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg1 completion:(void (^)(id <UIViewControllerTransitionCoordinatorContext>))arg2;
@end
