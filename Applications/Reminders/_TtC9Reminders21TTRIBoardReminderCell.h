//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC9Reminders21TTRIBoardReminderCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *intermediateViewModelObserver;	// 24 = 0x18
    MISSING_TYPE *viewModelState;	// 0 = 0x0
    MISSING_TYPE *roundedCorners;	// 0 = 0x0
    MISSING_TYPE *titleModule;	// 0 = 0x0
    MISSING_TYPE *notesModule;	// 0 = 0x0
    MISSING_TYPE *autoCompleteModule;	// 0 = 0x0
    MISSING_TYPE *customAccessibilityElement;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001f6750
- (id)_accessibilityInternalTextLinks;	// IMP=0x00100000001f6670
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
- (_Bool)accessibilityPerformEscape;	// IMP=0x00100000001f40f0
- (_Bool)accessibilityActivate;	// IMP=0x00100000001f40c0
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityIdentifier;
- (void)invalidateIntrinsicContentSize;	// IMP=0x00100000001f1570
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000001f13b0
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00100000001f1340
- (unsigned long long)_maskedCornersForSystemBackgroundView;	// IMP=0x00100000001f11e0
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00100000001f1120
- (void)prepareForReuse;	// IMP=0x00100000001f10f0
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x00100000001f0f10
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001f07f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001f0630

@end

