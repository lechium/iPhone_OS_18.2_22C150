//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8NewsFeed16FormatLayoutView : UIView
{
    MISSING_TYPE *identifier;	// 8 = 0x8
    MISSING_TYPE *debugButton;	// 24 = 0x18
    MISSING_TYPE *onSizeInvalidation;	// 32 = 0x20
    MISSING_TYPE *onKeyboardWillShow;	// 48 = 0x30
    MISSING_TYPE *onKeyboardWillHide;	// 64 = 0x40
    MISSING_TYPE *accessibilityRenderer;	// 80 = 0x50
    MISSING_TYPE *feedItem;	// 0 = 0x0
    MISSING_TYPE *viewAnimations;	// 26774656 = 0x1988c80
    MISSING_TYPE *token;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *isDirty;	// 0 = 0x0
    MISSING_TYPE *viewContainers;	// 0 = 0x0
    MISSING_TYPE *scrollObservers;	// 0 = 0x0
    MISSING_TYPE *loadAwareObservers;	// 0 = 0x0
    MISSING_TYPE *layoutObservers;	// 0 = 0x0
    MISSING_TYPE *viewControllers;	// 0 = 0x0
    MISSING_TYPE *viewKey;	// 0 = 0x0
    MISSING_TYPE *viewsByName;	// 1738704 = 0x1a87d0
    MISSING_TYPE *tapAction;	// 0 = 0x0
    MISSING_TYPE *tapGesture;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000001335730
- (void)layoutSubviews;	// IMP=0x0000000001335b30
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000001335970
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001335880
- (void)dealloc;	// IMP=0x0000000001335710
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000013354b0
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic, copy) NSString *accessibilityLanguage;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *ts_accessibilityElementHelp;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic, copy) NSString *accessibilityIdentifier;
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic) long long accessibilityContainerType;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000000133a330

@end

