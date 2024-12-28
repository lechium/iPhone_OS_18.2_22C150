//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _TtC9storekitd6Client;

@interface LoadInAppProductsTask
{
    NSString *_logKey;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
    NSArray *_identifiers;	// 24 = 0x18
    long long _identifierKind;	// 32 = 0x20
    long long _apiVersion;	// 40 = 0x28
    NSArray *_invalidIdentifiers;	// 48 = 0x30
    NSArray *_products;	// 56 = 0x38
    NSString *_serverCorrelationIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000880a6
@property(readonly, nonatomic) NSString *serverCorrelationIdentifier; // @synthesize serverCorrelationIdentifier=_serverCorrelationIdentifier;
@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, nonatomic) NSArray *invalidIdentifiers; // @synthesize invalidIdentifiers=_invalidIdentifiers;
@property(readonly, nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) long long identifierKind; // @synthesize identifierKind=_identifierKind;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (id)_parseLegacyToMedia:(id)arg1;	// IMP=0x00100000000871df
- (id)_parseMediaProducts:(id)arg1;	// IMP=0x00100000000867b9
- (id)_parseResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000085a0d
- (id)_requestBatches:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000085065
- (id)_queryDictionary;	// IMP=0x0010000000084ba6
- (id)_mediaAPIFetchWith:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008449d
- (id)_mediaClientIdentifier;	// IMP=0x0010000000084469
- (id)_mediaPlatformString;	// IMP=0x0010000000084450
- (id)_localeIdentifier;	// IMP=0x0010000000084042
- (id)_buildMediaAPIURLWith:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000839b1
- (id)_newProductIdentifierAllowedCharacterSet;	// IMP=0x0010000000083924
- (id)_productIdentifierAllowedCharacterSet;	// IMP=0x00100000000837fe
- (id)_processIdentifiers;	// IMP=0x00100000000834b4
- (BOOL)_clientType;	// IMP=0x001000000008346f
- (void)main;	// IMP=0x00100000000826df
- (id)initWithSubscriptionGroupIdentifiers:(id)arg1 client:(id)arg2;	// IMP=0x00100000000825e9
- (id)initWithProductIdentifiers:(id)arg1 client:(id)arg2 apiVersion:(long long)arg3;	// IMP=0x00100000000824f6

@end
