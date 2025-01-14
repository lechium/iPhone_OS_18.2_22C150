//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, NSObject, NSString, STUsageGraphViewController, STUsageSummaryTitleView, UIPageViewController, UIView;
@protocol STUsageDetailsViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STHistoricalUsageViewController : UIViewController
{
    NSObject<STUsageDetailsViewModelCoordinator> *_coordinator;	// 8 = 0x8
    STUsageSummaryTitleView *_titleView;	// 16 = 0x10
    long long _currentViewMode;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    double _graphHeight;	// 40 = 0x28
    STUsageGraphViewController *_selectedWeekGraphViewController;	// 48 = 0x30
    STUsageGraphViewController *_selectedDayGraphViewController;	// 56 = 0x38
    UIPageViewController *_weekGraphPageViewController;	// 64 = 0x40
    UIPageViewController *_dayGraphPageViewController;	// 72 = 0x48
    UIView *_weekGraphContainerView;	// 80 = 0x50
    UIView *_dayGraphContainerView;	// 88 = 0x58
    NSLayoutConstraint *_weekGraphContainerHeightConstraint;	// 96 = 0x60
    NSLayoutConstraint *_dayGraphContainerHeightConstraint;	// 104 = 0x68
    double _maximumYAxisLabelWidth;	// 112 = 0x70
}

+ (id)historicalUsageViewControllerOfType:(unsigned long long)arg1 graphHeight:(double)arg2;	// IMP=0x001000000006ff30
- (void).cxx_destruct;	// IMP=0x0000000000072739
@property(nonatomic) double maximumYAxisLabelWidth; // @synthesize maximumYAxisLabelWidth=_maximumYAxisLabelWidth;
@property(retain) NSLayoutConstraint *dayGraphContainerHeightConstraint; // @synthesize dayGraphContainerHeightConstraint=_dayGraphContainerHeightConstraint;
@property(retain) NSLayoutConstraint *weekGraphContainerHeightConstraint; // @synthesize weekGraphContainerHeightConstraint=_weekGraphContainerHeightConstraint;
@property(retain) UIView *dayGraphContainerView; // @synthesize dayGraphContainerView=_dayGraphContainerView;
@property(retain) UIView *weekGraphContainerView; // @synthesize weekGraphContainerView=_weekGraphContainerView;
@property(retain) UIPageViewController *dayGraphPageViewController; // @synthesize dayGraphPageViewController=_dayGraphPageViewController;
@property(retain) UIPageViewController *weekGraphPageViewController; // @synthesize weekGraphPageViewController=_weekGraphPageViewController;
@property(retain) STUsageGraphViewController *selectedDayGraphViewController; // @synthesize selectedDayGraphViewController=_selectedDayGraphViewController;
@property(retain, nonatomic) STUsageGraphViewController *selectedWeekGraphViewController; // @synthesize selectedWeekGraphViewController=_selectedWeekGraphViewController;
@property(readonly) double graphHeight; // @synthesize graphHeight=_graphHeight;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property long long currentViewMode; // @synthesize currentViewMode=_currentViewMode;
@property(retain) STUsageSummaryTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSObject<STUsageDetailsViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (id)_dataSetFromUsageReport:(id)arg1;	// IMP=0x000000000007246c
- (id)_dayGraphViewControllerForDay:(unsigned long long)arg1 week:(unsigned long long)arg2 usageReport:(id)arg3;	// IMP=0x0000000000072256
- (id)_weekGraphViewControllerForWeek:(unsigned long long)arg1 usageReport:(id)arg2;	// IMP=0x0000000000071ff2
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x0000000000071cd8
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;	// IMP=0x0000000000071b0a
- (id)_nextGraphViewControllerForPageViewController:(id)arg1 currentGraphViewController:(id)arg2 direction:(long long)arg3;	// IMP=0x0000000000071649
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x0000000000071546
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000000071440
- (void)_selectedBarViewDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000071297
- (void)_selectedDayUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000070e87
- (void)_selectedWeekUsageReportDidChange:(id)arg1;	// IMP=0x0000000000070b72
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007064d
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;	// IMP=0x000000000007021d
- (void)viewDidLoad;	// IMP=0x00000000000700b0
- (void)dealloc;	// IMP=0x000000000006fff0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

