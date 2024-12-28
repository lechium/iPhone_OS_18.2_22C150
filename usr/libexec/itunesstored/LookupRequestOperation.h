//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, SSAuthenticationContext, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    long long _personalizationStyle;	// 112 = 0x70
    SSLookupProperties *_properties;	// 120 = 0x78
    SSLookupResponse *_response;	// 128 = 0x80
    _Bool _shouldSuppressCookies;	// 136 = 0x88
    NSString *_userAgent;	// 144 = 0x90
}

- (id)_URLBagContext;	// IMP=0x00200000001453cc
- (void)_setLookupResponse:(id)arg1;	// IMP=0x0010000000145372
- (void)_setAccountID:(id)arg1;	// IMP=0x00100000001452cb
- (_Bool)_performPlatformLookup:(id *)arg1;	// IMP=0x0010000000144adf
- (_Bool)_performLocationLookup:(id *)arg1;	// IMP=0x0010000000144684
- (_Bool)_performJSSignLookupWithURLBag:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001441fb
- (id)_newStoreURLOperationWithBagKey:(id)arg1;	// IMP=0x001000000014400a
- (id)_newLookupResponseWithResultsFromOperation:(id)arg1;	// IMP=0x0010000000143f5f
- (id)_authenticationContext;	// IMP=0x0010000000143eba
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x0010000000143df2
- (void)run;	// IMP=0x0010000000143bae
@property(copy) NSString *userAgent;
@property _Bool shouldSuppressCookies;
@property long long personalizationStyle;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSLookupResponse *lookupResponse;
@property(readonly) SSLookupProperties *lookupProperties;
- (void)dealloc;	// IMP=0x001000000014377f
- (id)initWithLookupProperties:(id)arg1;	// IMP=0x0010000000143721

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly) Class superclass;

@end
