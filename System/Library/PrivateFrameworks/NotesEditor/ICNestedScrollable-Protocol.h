//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIScrollView;

@protocol ICNestedScrollable
@property(nonatomic, readonly) UIScrollView *scrollView;
@property(nonatomic, readonly) struct UIEdgeInsets adjustedContentInset;
@property(nonatomic, readonly) struct CGRect scrollBounds;
@property(nonatomic, readonly) struct CGSize contentSize;
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic, readonly) struct CGRect frameInContainingScrollView;
@property(nonatomic, readonly) _Bool isLocked;
@property(nonatomic, readonly) _Bool isZoomed;
@end
