//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMarkerAnnotationView, ParkedCar, UINavigationBar;

@interface ParkedCarLocationRefinementViewController
{
    ParkedCar *_parkedCar;	// 8 = 0x8
    MKMarkerAnnotationView *_annotationView;	// 16 = 0x10
    UINavigationBar *_navBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000083098d
- (void)_cancel:(id)arg1;	// IMP=0x00100000008308f9
- (void)_done:(id)arg1;	// IMP=0x00100000008307a2
- (void)viewDidLayoutSubviews;	// IMP=0x00100000008304a6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000830175
- (void)viewDidLoad;	// IMP=0x001000000082fe47
- (id)initWithCamera:(id)arg1 crosshairType:(unsigned long long)arg2;	// IMP=0x001000000082fe33
- (id)initWithCamera:(id)arg1 parkedCar:(id)arg2;	// IMP=0x001000000082fda3

@end

