//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC6Health30CloudSyncWelcomeViewController : OBWelcomeController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *cloudSyncControl;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x004000000007aa60
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x001000000007aa00
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x001000000007a9d0
- (void)didTapDisableCloudSync:(id)arg1;	// IMP=0x001000000007a940
- (void)didTapEnableCloudSync:(id)arg1;	// IMP=0x001000000007a630
- (void)viewDidLoad;	// IMP=0x001000000007a480

@end
