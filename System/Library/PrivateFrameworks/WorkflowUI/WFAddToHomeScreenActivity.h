//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/UIActivity.h>

@class MISSING_TYPE, NSString, UIViewController;

@interface WFAddToHomeScreenActivity : UIActivity
{
    MISSING_TYPE *reference;	// 8 = 0x8
    MISSING_TYPE *viewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000091b85
- (id)init;	// IMP=0x0000000000091b4f
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x0000000000091aec
@property(nonatomic, readonly) UIViewController *activityViewController;
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00000000000919b9
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000091990
- (id)_systemImageName;	// IMP=0x000000000009194e
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;
- (id)initWithReference:(id)arg1;	// IMP=0x0000000000091784

@end

