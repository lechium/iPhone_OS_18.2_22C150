//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SettingsCellular/PSAppDataUsagePolicySwitchSpecifier.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier
{
    ACAccountStore *_accountStore;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000022876
- (id)getLogger;	// IMP=0x0000000000022856
- (void)setCellularUsagePolicy:(id)arg1;	// IMP=0x0000000000022526
- (id)cellularUsagePolicy;	// IMP=0x00000000000223f7
- (id)appleAccount;	// IMP=0x00000000000223da
- (id)cloudDriveGroupSpecifier;	// IMP=0x00000000000222ec
- (_Bool)shouldShowCloudDrive;	// IMP=0x000000000002229e
- (id)initWithAppleAccountStore:(id)arg1;	// IMP=0x0000000000022187

@end

