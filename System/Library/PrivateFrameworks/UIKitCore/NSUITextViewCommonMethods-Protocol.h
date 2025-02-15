//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSTextContainerView-Protocol.h>
#import <UIKitCore/NSTextLayoutOrientationProvider-Protocol.h>

@class NSDictionary, NSLayoutManager, NSTextContainer;

@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider, NSTextContainerView>
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (_Bool)isHorizontallyResizable;
- (struct CGSize)minSize;
- (void)invalidateTextContainerOrigin;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)textContainerInset;
- (struct CGPoint)textContainerOrigin;
- (struct CGRect)visibleRect;

@optional
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,N

@property(nonatomic) struct _NSRange markedRange;
// Preceding property had unknown attributes: ?
// Original attribute string: T{_NSRange=QQ},?,N

@property(nonatomic) __weak NSTextContainer *textContainer;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSTextContainer",?,W,N

@end

