//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIDismissInteraction, _UIDismissInteractionUpdate;

@protocol _UIDismissInteractionDelegate <NSObject>
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didCancelWithVelocity:(struct CGPoint)arg2 originalPosition:(struct CGPoint)arg3;
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didDismissWithVelocity:(struct CGPoint)arg2;
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didIssueUpdate:(_UIDismissInteractionUpdate *)arg2;
- (UIView *)trackingViewForInteraction:(_UIDismissInteraction *)arg1;
- (void)dismissInteraction:(_UIDismissInteraction *)arg1 didBeginAtLocation:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)dismissInteraction:(_UIDismissInteraction *)arg1 shouldBeginWithAxis:(unsigned long long)arg2 location:(struct CGPoint)arg3 velocity:(struct CGPoint)arg4 proposal:(_Bool)arg5;
- (double)hysteresisForInteraction:(_UIDismissInteraction *)arg1;
@end

