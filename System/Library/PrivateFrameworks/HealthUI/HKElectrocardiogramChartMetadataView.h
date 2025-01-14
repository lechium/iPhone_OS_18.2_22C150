//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class HKElectrocardiogramAxisView, HKElectrocardiogramChartView, HKElectrocardiogramInfoView, UIScrollView;

__attribute__((visibility("hidden")))
@interface HKElectrocardiogramChartMetadataView : UIView
{
    HKElectrocardiogramChartView *_chartView;	// 8 = 0x8
    HKElectrocardiogramInfoView *_infoView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    HKElectrocardiogramAxisView *_axisView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d1494
@property(retain, nonatomic) HKElectrocardiogramAxisView *axisView; // @synthesize axisView=_axisView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) HKElectrocardiogramInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) HKElectrocardiogramChartView *chartView; // @synthesize chartView=_chartView;
@property(readonly, nonatomic) struct CGSize gridSize;
- (void)_updateMargins;	// IMP=0x00000000000d128d
- (void)layoutMarginsDidChange;	// IMP=0x00000000000d124c
- (void)_setUpScrollViewContent;	// IMP=0x00000000000d0749
- (void)_setUpUI;	// IMP=0x00000000000d0134
- (id)initWithGridSize:(struct CGSize)arg1;	// IMP=0x00000000000cff15

@end

