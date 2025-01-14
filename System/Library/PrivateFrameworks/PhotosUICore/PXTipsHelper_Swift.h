//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIViewController;

@interface PXTipsHelper_Swift : NSObject
{
    MISSING_TYPE *presentedTipID;	// 8 = 0x8
    MISSING_TYPE *tipPopover;	// 24 = 0x18
}

+ (_Bool)isTipInvalidated:(id)arg1;	// IMP=0x001000000074adb0
+ (void)setTip:(id)arg1 presentationDelegate:(id)arg2;	// IMP=0x001000000074ad50
+ (void)setup;	// IMP=0x0010000000749d40
+ (void)setHasInitializedTips:(_Bool)arg1;	// IMP=0x0010000000749d00
+ (_Bool)hasInitializedTips;	// IMP=0x0010000000749cd0
+ (void)setIsInitializingTips:(_Bool)arg1;	// IMP=0x0010000000749c90
+ (_Bool)isInitializingTips;	// IMP=0x0010000000749c60
+ (void)setPresentationDelegates:(id)arg1;	// IMP=0x00100000007498b0
+ (id)presentationDelegates;	// IMP=0x0010000000749830
- (void).cxx_destruct;	// IMP=0x000000000074aee0
- (id)init;	// IMP=0x000000000074ae60
@property(nonatomic) __weak UIViewController *tipPopover; // @synthesize tipPopover;
@property(nonatomic, copy) NSString *presentedTipID;
- (void)updatePopoverTip:(id)arg1 sourceRect:(struct CGRect)arg2;	// IMP=0x00000000009f2130
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000009f2290

@end

