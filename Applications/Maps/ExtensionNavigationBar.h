//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationBar.h>

@class MKViewWithHairline;

@interface ExtensionNavigationBar : UINavigationBar
{
    _Bool _supressTransition;	// 8 = 0x8
    MKViewWithHairline *_hairlineView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000008548db
@property(nonatomic) _Bool supressTransition; // @synthesize supressTransition=_supressTransition;
@property(retain, nonatomic) MKViewWithHairline *hairlineView; // @synthesize hairlineView=_hairlineView;
- (void)layoutSubviews;	// IMP=0x00100000008547c6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000085465f

@end

