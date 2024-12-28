//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CUIKCalendarModel, DayNavigationView, DayNavigationWeekScrollView, NSObject, NSString;
@protocol DayNavigationViewCellFactory, DayNavigationViewControllerDelegate;

@interface DayNavigationViewController : UIViewController
{
    CUIKCalendarModel *_model;	// 8 = 0x8
    DayNavigationView *_navigationView;	// 16 = 0x10
    _Bool _eventSpringLoadingEnabled;	// 24 = 0x18
    _Bool _loadingOccurrenceCache;	// 25 = 0x19
    _Bool _showsMultiDay;	// 26 = 0x1a
    NSObject<DayNavigationViewControllerDelegate> *_delegate;	// 32 = 0x20
    NSObject<DayNavigationViewCellFactory> *_cellFactory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000014948f
@property(retain, nonatomic) NSObject<DayNavigationViewCellFactory> *cellFactory; // @synthesize cellFactory=_cellFactory;
@property(nonatomic) __weak NSObject<DayNavigationViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsMultiDay;
- (id)visibleCellBadgeLocales;	// IMP=0x00100000001493ab
- (id)visibleCellBadgeColors;	// IMP=0x0010000000149350
- (id)visibleCellDayTypes;	// IMP=0x00100000001492f5
@property(nonatomic) struct UIEdgeInsets paletteSafeAreaInsets;
@property(nonatomic) _Bool eventSpringLoadingEnabled;
- (void)pulseToday;	// IMP=0x0010000000149219
- (void)timeZoneChanged;	// IMP=0x001000000014919f
- (void)significantTimeChangeOccurred;	// IMP=0x0010000000149182
- (_Bool)canAnimateToDate:(id)arg1;	// IMP=0x0010000000149165
- (void)setSelectedDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000149148
- (void)setVisible:(_Bool)arg1;	// IMP=0x00100000001490ea
@property(readonly, nonatomic) DayNavigationWeekScrollView *weekScrollView;
- (void)_cachedOccurrencesChanged:(id)arg1;	// IMP=0x0010000000149066
- (void)_contentSizeCategoryChanged;	// IMP=0x0010000000148fb2
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x0010000000148f53
- (void)_localeChanged:(id)arg1;	// IMP=0x0010000000148e70
- (id)dayNavigationView:(id)arg1 dayDataForDate:(id)arg2;	// IMP=0x0010000000148b93
- (_Bool)dayNavigationViewIsLoadingSpecialDayData:(id)arg1;	// IMP=0x0010000000148b83
- (void)dayNavigationView:(id)arg1 didChangeCellWidth:(double)arg2;	// IMP=0x0010000000148adc
- (_Bool)dayNavigationViewAllowedToChangeSelectedDate;	// IMP=0x0010000000148a46
- (void)dayNavigationViewFailedToSelectDate:(CDUnknownBlockType)arg1;	// IMP=0x001000000014899f
- (void)dayNavigationView:(id)arg1 selectedDateChanged:(id)arg2;	// IMP=0x0010000000148911
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000001488f4
- (void)loadView;	// IMP=0x0010000000148651
- (id)initWithModel:(id)arg1;	// IMP=0x00100000001485df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
