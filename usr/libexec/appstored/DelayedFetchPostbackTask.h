//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSURLRequestEncoder, InstallAttributionDatabaseStore, NSArray, NSMutableDictionary, NSNumber, NSURL;

@interface DelayedFetchPostbackTask
{
    NSURL *_fetchPostbackInfoURL;	// 8 = 0x8
    AMSURLRequestEncoder *_requestEncoder;	// 16 = 0x10
    NSMutableDictionary *_paramsDict;	// 24 = 0x18
    _Bool _shouldUseProxy;	// 32 = 0x20
    NSArray *_postbackResults;	// 40 = 0x28
    NSArray *_rejectedImpressionResults;	// 48 = 0x30
    NSNumber *_appAdamID;	// 56 = 0x38
    NSNumber *_responseStatusCode;	// 64 = 0x40
    InstallAttributionDatabaseStore *_databaseStore;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000013660e
@property(retain, nonatomic) NSNumber *responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(retain, nonatomic) NSArray *rejectedImpressionResults; // @synthesize rejectedImpressionResults=_rejectedImpressionResults;
@property(retain, nonatomic) NSArray *postbackResults; // @synthesize postbackResults=_postbackResults;
- (void)mainWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000134bb8
- (id)initWithAppAdamID:(id)arg1 usingProxy:(_Bool)arg2;	// IMP=0x00100000001348e2

@end
