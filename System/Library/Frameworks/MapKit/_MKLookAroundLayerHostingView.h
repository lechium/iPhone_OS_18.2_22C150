//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VKMapView;

__attribute__((visibility("hidden")))
@interface _MKLookAroundLayerHostingView : UIView
{
    VKMapView *_lookAroundView;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x006000000000fff0
- (void).cxx_destruct;	// IMP=0x0000000000010241
@property(retain, nonatomic) VKMapView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000010196
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000001010d
- (void)dealloc;	// IMP=0x00000000000100a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000010001

@end
