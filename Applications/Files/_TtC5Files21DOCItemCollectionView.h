//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class MISSING_TYPE;

@interface _TtC5Files21DOCItemCollectionView : UICollectionView
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *displayDelegate;	// 16 = 0x10
    MISSING_TYPE *_dragInteraction;	// 32 = 0x20
    MISSING_TYPE *focusableCollectionViewDelegate;	// 40 = 0x28
    MISSING_TYPE *focusableCollectionViewState;	// 56 = 0x38
    MISSING_TYPE *gestureDelegate;	// 64 = 0x40
    MISSING_TYPE *backgroundTapGestureRecognizer;	// 80 = 0x50
    MISSING_TYPE *itemCollectionViewController;	// 88 = 0x58
    MISSING_TYPE *containerIsShowingNoContentUI;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000041b2c0
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x001000000041b260
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000041b0e0
- (_Bool)_hasContentForBarInteractions;	// IMP=0x001000000041acf0
- (void)safeAreaInsetsDidChange;	// IMP=0x001000000041ac10
- (void)layoutSubviews;	// IMP=0x001000000041ab80
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000041a640
- (void)_backgroundTapGestureRecognized:(id)arg1;	// IMP=0x001000000041b510
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x001000000041b4b0

@end

