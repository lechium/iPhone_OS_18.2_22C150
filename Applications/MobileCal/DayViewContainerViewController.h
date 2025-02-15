//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactDayViewController, LargeDayViewController;

@interface DayViewContainerViewController
{
    CompactDayViewController *_compactController;	// 16 = 0x10
    LargeDayViewController *_regularController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000f67cf
@property(retain, nonatomic) LargeDayViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactDayViewController *compactController; // @synthesize compactController=_compactController;
- (_Bool)representsDayInViewHierarchy;	// IMP=0x00100000000f677d
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x00100000000f673a
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x00100000000f6633
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x00100000000f6621
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x00100000000f651a
- (id)childViewControllerForUnknownTraits;	// IMP=0x00100000000f6508
- (id)currentChildViewController;	// IMP=0x00100000000f64ca
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00100000000f63df

@end

