//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSDMultiUserController, AMSDMultiUserMetrics, AMSDRefreshMultiUserOptions, NSArray;

@interface AMSDRefreshMultiUserTask : AMSTask
{
    AMSDMultiUserController *_controller;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
    AMSDRefreshMultiUserOptions *_options;	// 24 = 0x18
    AMSDMultiUserMetrics *_metrics;	// 32 = 0x20
}

+ (id)_createGenerateMultiUserTokenTaskForAccount:(id)arg1 withController:(id)arg2 home:(id)arg3 multiUserTokenExists:(_Bool)arg4;	// IMP=0x00400000000496c9
- (void).cxx_destruct;	// IMP=0x002000000004b8d3
@property(retain, nonatomic) AMSDMultiUserMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) AMSDRefreshMultiUserOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *homes; // @synthesize homes=_homes;
@property(readonly, nonatomic) AMSDMultiUserController *controller; // @synthesize controller=_controller;
- (void)_transferHomeSettingsToAccountsWithErrors:(id)arg1;	// IMP=0x001000000004b875
- (void)_removeRenewCredentialsFollowUp;	// IMP=0x001000000004b86f
- (void)_refreshCloudDatabasesWithErrors:(id)arg1;	// IMP=0x001000000004b869
- (void)_reconcileRecordZonesWithErrors:(id)arg1;	// IMP=0x001000000004a84e
- (void)_reconcileiTunesAccountsWithErrors:(id)arg1;	// IMP=0x001000000004a848
- (void)_createMultiUserTokensWithErrors:(id)arg1;	// IMP=0x001000000004a689
- (_Bool)_createMultiUserTokenForHome:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004978c
- (void)_configurePreferredMediaUser:(id)arg1;	// IMP=0x00100000000496c3
- (id)performTask;	// IMP=0x00100000000490d0
- (id)initWithMultiUserController:(id)arg1 homes:(id)arg2 options:(id)arg3;	// IMP=0x0010000000049006

@end
