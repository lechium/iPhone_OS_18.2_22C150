//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, _TtC4Maps23RefinementsBarViewModel;
@protocol _TtP4Maps26RefinementsBarViewDelegate_;

@interface _TtC4Maps20RefinementsBarUIView : UIView
{
    MISSING_TYPE *refinementBar;	// 8 = 0x8
    MISSING_TYPE *hostingView;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0040000000129b50
@property(nonatomic, retain) _TtC4Maps23RefinementsBarViewModel *viewModel;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000129240
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000129210
@property(nonatomic) __weak id <_TtP4Maps26RefinementsBarViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) UIView *hostingView; // @synthesize hostingView;

@end

