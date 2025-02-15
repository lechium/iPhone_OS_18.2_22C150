//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CarFocusableCollectionItemDelegate;

@interface CarSmallWidgetCollectionViewCell
{
    id <CarFocusableCollectionItemDelegate> _delegate;	// 8 = 0x8
}

+ (double)bottomMargin;	// IMP=0x0020000000a5e2bf
+ (_Bool)isSubtitleHidden;	// IMP=0x0010000000a5e2b7
+ (double)imageTopMargin;	// IMP=0x0000000000a5e2ae
- (void).cxx_destruct;	// IMP=0x0020000000a5e4ef
@property(nonatomic) __weak id <CarFocusableCollectionItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusableItemSelected;	// IMP=0x0010000000a5e476
- (void)focusableItemPressed:(_Bool)arg1;	// IMP=0x0010000000a5e464
- (void)focusableItemFocused:(_Bool)arg1;	// IMP=0x0010000000a5e452
- (void)_focusColorDidChange;	// IMP=0x0010000000a5e440
- (id)focusColor;	// IMP=0x0010000000a5e381
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a5e2c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

