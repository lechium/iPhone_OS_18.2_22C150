//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSURLRequestEncoder, InstallAttributionDatabaseStore, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSURL;

@interface FetchPostbackTask
{
    NSURL *_fetchPostbackInfoURL;	// 8 = 0x8
    InstallAttributionDatabaseStore *_databaseStore;	// 16 = 0x10
    AMSURLRequestEncoder *_requestEncoder;	// 24 = 0x18
    ACAccount *_account;	// 32 = 0x20
    NSMutableDictionary *_paramsDict;	// 40 = 0x28
    NSMutableArray *_results;	// 48 = 0x30
    NSNumber *_appAdamID;	// 56 = 0x38
    NSNumber *_responseStatusCode;	// 64 = 0x40
    NSArray *_params;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001aa834
- (void)main;	// IMP=0x00100000001a9da8

@end

