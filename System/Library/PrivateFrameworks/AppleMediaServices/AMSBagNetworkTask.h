//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class AMSMetricsActivity, AMSProcessInfo, NSString;
@protocol AMSBagAccountProvider;

__attribute__((visibility("hidden")))
@interface AMSBagNetworkTask : AMSTask
{
    AMSMetricsActivity *_activity;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    NSString *_profile;	// 24 = 0x18
    NSString *_profileVersion;	// 32 = 0x20
    id <AMSBagAccountProvider> _accountProvider;	// 40 = 0x28
    NSString *_logKey;	// 48 = 0x30
}

+ (id)_URLCookieNamesForProfile:(id)arg1;	// IMP=0x0060000000309c0b
+ (_Bool)_shouldReloadDataForOriginalCookies:(id)arg1 newCookies:(id)arg2;	// IMP=0x0060000000309b0e
+ (void)_setURLCookieNames:(id)arg1 forProfile:(id)arg2;	// IMP=0x0060000000309a0e
+ (id)_defaultURLCookieNames;	// IMP=0x00600000003099be
+ (id)_cookiesForNames:(id)arg1 clientInfo:(id)arg2 account:(id)arg3;	// IMP=0x00600000003096b2
+ (id)_setStorefrontFromURLResponse:(id)arg1 bagData:(id)arg2;	// IMP=0x0060000000308d69
+ (id)_requestIdentifierForQueryItems:(id)arg1 prefix:(id)arg2;	// IMP=0x0060000000308ba1
+ (id)_requestIdentifierForQueryItems:(id)arg1;	// IMP=0x0060000000308b88
+ (id)_queryItemsForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 cookieNames:(id)arg4 accountProvider:(id)arg5;	// IMP=0x0060000000308a2a
+ (id)_queryItemsForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 cookieNames:(id)arg4 account:(id)arg5 storefront:(id)arg6;	// IMP=0x0060000000308608
+ (id)_urlSessionPromise;	// IMP=0x0060000000307eb1
+ (id)_createURLSessionPromise;	// IMP=0x0060000000307d1d
+ (id)_bagDataByApplyingOverridesToBagData:(id)arg1 overrides:(id)arg2 ignoredKeys:(id)arg3 inserts:(id)arg4;	// IMP=0x006000000030758f
+ (id)_bagDataByApplyingOverridesToBagData:(id)arg1;	// IMP=0x00600000003074b2
+ (id)requestPartialIdentifierForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;	// IMP=0x0060000000305e92
- (void).cxx_destruct;	// IMP=0x0000000000309d6a
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) id <AMSBagAccountProvider> accountProvider; // @synthesize accountProvider=_accountProvider;
@property(retain, nonatomic) NSString *profileVersion; // @synthesize profileVersion=_profileVersion;
@property(retain, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (void)setActivity:(id)arg1;	// IMP=0x0000000000309cc5
- (id)activity;	// IMP=0x0000000000309cb4
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg1;	// IMP=0x0000000000309263
- (_Bool)_shouldRetryForResult:(id)arg1 cookieNames:(id)arg2 urlCookies:(id)arg3 responseStorefront:(id)arg4;	// IMP=0x0000000000308ea9
- (id)_createRequestWithQueryItems:(id)arg1;	// IMP=0x0000000000307f46
- (id)performFetch;	// IMP=0x0000000000306f03
- (id)_performFetchWithAttemptedCount:(unsigned long long)arg1 account:(id)arg2 storefront:(id)arg3;	// IMP=0x0000000000305f0e
- (id)initWithClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3 accountProvider:(id)arg4;	// IMP=0x0000000000305d41

@end

