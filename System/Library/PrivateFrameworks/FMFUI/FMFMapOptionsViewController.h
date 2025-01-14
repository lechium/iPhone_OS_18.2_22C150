//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MKMapAttribution, UIButton, UISegmentedControl, UIView;
@protocol FMFMapOptionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FMFMapOptionsViewController : UIViewController
{
    id <FMFMapOptionsViewControllerDelegate> _delegate;	// 8 = 0x8
    UIButton *_mapAttributionButton;	// 16 = 0x10
    UIView *_topTapView;	// 24 = 0x18
    UISegmentedControl *_segmentedControl;	// 32 = 0x20
    UIView *_bottomWhitePane;	// 40 = 0x28
    MKMapAttribution *_mapAttribution;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000019f0a
@property(retain, nonatomic) MKMapAttribution *mapAttribution; // @synthesize mapAttribution=_mapAttribution;
@property(retain, nonatomic) UIView *bottomWhitePane; // @synthesize bottomWhitePane=_bottomWhitePane;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *topTapView; // @synthesize topTapView=_topTapView;
@property(retain, nonatomic) UIButton *mapAttributionButton; // @synthesize mapAttributionButton=_mapAttributionButton;
@property(nonatomic) __weak id <FMFMapOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)segmentedControlChanged:(id)arg1;	// IMP=0x0000000000019cae
- (void)attributionButtonPressed:(id)arg1;	// IMP=0x0000000000019bc0
- (void)openInMaps:(id)arg1;	// IMP=0x000000000001998d
- (void)viewDidLoad;	// IMP=0x0000000000019781
- (struct CGSize)paneSize;	// IMP=0x0000000000019717
- (void)_dismiss:(id)arg1;	// IMP=0x00000000000196cb
- (void)awakeFromNib;	// IMP=0x000000000001969c
- (id)init;	// IMP=0x0000000000019624

@end

