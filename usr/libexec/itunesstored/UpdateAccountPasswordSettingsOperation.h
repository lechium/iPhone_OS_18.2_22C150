//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSMutableURLRequestProperties;

@interface UpdateAccountPasswordSettingsOperation : ISOperation
{
    long long _freeDownloadsPasswordSetting;	// 96 = 0x60
    long long _paidPurchasesPasswordSetting;	// 104 = 0x68
    SSMutableURLRequestProperties *_requestProperties;	// 112 = 0x70
}

+ (long long)_accountPasswordSettingValueForServerValue:(id)arg1;	// IMP=0x00400000001b8825
- (void).cxx_destruct;	// IMP=0x00200000001b88ad
- (id)_serverValueForAccountPasswordSettingValue:(long long)arg1 defaultValue:(id)arg2;	// IMP=0x00100000001b87d6
- (id)_newAccountPasswordSettingsDictionary;	// IMP=0x00100000001b86de
- (id)_requestDictionary;	// IMP=0x00100000001b85e7
- (void)run;	// IMP=0x00100000001b833d
@property(readonly) long long paidPurchasesPasswordSetting;
@property(readonly) long long freeDownloadsPasswordSetting;
- (id)initWithFreeDownloadsPasswordSetting:(long long)arg1 paidPurchasesPasswordSetting:(long long)arg2 requestProperties:(id)arg3;	// IMP=0x00100000001b8217
- (id)initWithFreeDownloadsPasswordSetting:(long long)arg1 paidPurchasesPasswordSetting:(long long)arg2;	// IMP=0x00100000001b8202

@end

