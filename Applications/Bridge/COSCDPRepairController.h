//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface COSCDPRepairController
{
    MISSING_TYPE *cdpEncryptionHelper;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x002000000015b7b0
+ (_Bool)requiresiCDPRepair;	// IMP=0x001000000015a540
- (void).cxx_destruct;	// IMP=0x004000000015c880
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x001000000015c750
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x001000000015c6b0
- (id)init;	// IMP=0x001000000015c580
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000015bb40
- (id)localizedWaitScreenDescription;	// IMP=0x001000000015bad0
- (double)waitScreenPushGracePeriod;	// IMP=0x001000000015ba90
- (_Bool)holdWithWaitScreen;	// IMP=0x001000000015ba70
- (_Bool)holdBeforeDisplaying;	// IMP=0x001000000015ba50
- (void)didPushWaitScreen;	// IMP=0x001000000015b970

@end

