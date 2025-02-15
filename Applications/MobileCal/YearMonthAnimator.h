//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIKCalendarModel, EKCalendarDate, NSString, PaletteView, YearMonthTransitionView;

@interface YearMonthAnimator : NSObject
{
    _Bool _reverse;	// 8 = 0x8
    CUIKCalendarModel *_model;	// 16 = 0x10
    YearMonthTransitionView *_transitionView;	// 24 = 0x18
    EKCalendarDate *_selectedDate;	// 32 = 0x20
    PaletteView *_paletteView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000ac007
@property(retain, nonatomic) PaletteView *paletteView; // @synthesize paletteView=_paletteView;
@property(retain, nonatomic) EKCalendarDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) YearMonthTransitionView *transitionView; // @synthesize transitionView=_transitionView;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) CUIKCalendarModel *model; // @synthesize model=_model;
- (void)animateTransition:(id)arg1;	// IMP=0x00100000000ab4d3
- (double)transitionDuration:(id)arg1;	// IMP=0x00100000000ab483
- (id)initWithModel:(id)arg1 paletteView:(id)arg2 reverse:(_Bool)arg3;	// IMP=0x00100000000ab39e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

