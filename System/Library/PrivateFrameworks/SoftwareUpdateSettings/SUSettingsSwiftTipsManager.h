//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SUSettingsSwiftTipsManager : NSObject
{
    MISSING_TYPE *constellationComingSoonTip;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *userDefaultsBasedComingSoonTip;	// 1887007839 = 0x7079745f
    MISSING_TYPE *mockedComingSoonTip;	// 8 = 0x8
    MISSING_TYPE *inManualControl;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x004000000001e1c0
- (void).cxx_destruct;	// IMP=0x000000000001f3b0
- (id)init;	// IMP=0x000000000001f2f0
- (void)configureManualComingSoonTipWithTitle:(id)arg1 andContent:(id)arg2 learnMoreLink:(id)arg3;	// IMP=0x000000000001f1a0
- (void)setupForManualControl:(_Bool)arg1;	// IMP=0x000000000001ed90
- (void)setup;	// IMP=0x000000000001e3b0
@property(nonatomic, readonly) _Bool shouldShowUserDefaultsBasedComingSoonTip;

@end
