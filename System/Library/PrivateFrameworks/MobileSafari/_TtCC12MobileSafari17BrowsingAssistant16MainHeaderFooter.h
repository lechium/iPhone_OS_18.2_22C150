//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class MISSING_TYPE, SFStepper;

__attribute__((visibility("hidden")))
@interface _TtCC12MobileSafari17BrowsingAssistant16MainHeaderFooter : UICollectionReusableView
{
    MISSING_TYPE *contentCornerRadius;	// 8 = 0x8
    MISSING_TYPE *leadingButtonActionHandler;	// 16 = 0x10
    MISSING_TYPE *trailingButtonActionHandler;	// 32 = 0x20
    MISSING_TYPE *leadingButton;	// 48 = 0x30
    MISSING_TYPE *trailingButton;	// 56 = 0x38
    MISSING_TYPE *stepper;	// 64 = 0x40
    MISSING_TYPE *backgroundView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000036ded0
@property(nonatomic, retain) SFStepper *stepper; // @synthesize stepper;
@property(nonatomic, copy) CDUnknownBlockType leadingButtonActionHandler;
@property(nonatomic) _Bool leadingButtonEnabled;
- (_Bool)isLeadingButtonEnabled;	// IMP=0x000000000036d960
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000036d880
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036cf00

@end
