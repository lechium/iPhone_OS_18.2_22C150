//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriSharedUI/SiriSharedUIAccessibilityFocusing-Protocol.h>

@class NSArray, SiriSharedUIAnimationContext, SiriSharedUIViewStackConstraints;
@protocol SiriSharedUIStackableContentDelegate;

@protocol SiriSharedUIStackableContent <SiriSharedUIAccessibilityFocusing>
@property(retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints;
@property(readonly, nonatomic) struct CGSize portraitContentSize;
@property(nonatomic) double attachmentYOffset;
@property(nonatomic) long long attachmentType;
@property(nonatomic) __weak id <SiriSharedUIStackableContentDelegate> stackContainerDelegate;

@optional
@property(retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"SiriSharedUIAnimationContext",?,&,N

@property(retain, nonatomic) NSArray *customAttachmentConstraints;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,&,N

@property(nonatomic) _Bool useLowerPriorityHeightConstraint;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)relayout;
@end

