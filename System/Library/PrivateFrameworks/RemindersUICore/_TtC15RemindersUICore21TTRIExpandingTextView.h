//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class MISSING_TYPE;

@interface _TtC15RemindersUICore21TTRIExpandingTextView : UITextView
{
    MISSING_TYPE *lineIndexWhereClippingBegins;	// 8 = 0x8
    MISSING_TYPE *isForUseInNUIContainerView;	// 17 = 0x11
    MISSING_TYPE *textStorageObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000694af0
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;	// IMP=0x0000000000694a90
- (double)effectiveBaselineOffsetFromBottom;	// IMP=0x0000000000694950
- (double)effectiveFirstBaselineOffsetFromTop;	// IMP=0x0000000000694870
- (struct CGSize)_layoutSizeThatFits:(struct CGSize)arg1 fixedAxes:(unsigned long long)arg2;	// IMP=0x0000000000694770
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006946f0
@property(nonatomic) _Bool scrollEnabled;
- (_Bool)isScrollEnabled;	// IMP=0x0000000000694360
@property(nonatomic) unsigned long long accessibilityTraits;
- (_Bool)accessibilityActivate;	// IMP=0x0000000000695010
@property(nonatomic, readonly) _Bool _shouldScrollEnclosingScrollView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000694f60
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic) struct CGSize contentSize;

@end
