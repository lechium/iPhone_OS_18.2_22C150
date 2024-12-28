//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebNetworkAction
{
    _Bool _includeAuthKitTokens;	// 8 = 0x8
    _Bool _includeiCloudTokens;	// 9 = 0x9
    _Bool _requiresCellularAccess;	// 10 = 0xa
    _Bool _usePrimaryKeychain;	// 11 = 0xb
    ACAccount *_account;	// 16 = 0x10
    NSString *_body;	// 24 = 0x18
    NSString *_gsTokenIdentifier;	// 32 = 0x20
    NSDictionary *_headers;	// 40 = 0x28
    NSString *_method;	// 48 = 0x30
    NSString *_signatureData;	// 56 = 0x38
    NSURL *_URL;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000c79e7
@property(nonatomic) _Bool usePrimaryKeychain; // @synthesize usePrimaryKeychain=_usePrimaryKeychain;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) _Bool requiresCellularAccess; // @synthesize requiresCellularAccess=_requiresCellularAccess;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(nonatomic) _Bool includeiCloudTokens; // @synthesize includeiCloudTokens=_includeiCloudTokens;
@property(nonatomic) _Bool includeAuthKitTokens; // @synthesize includeAuthKitTokens=_includeAuthKitTokens;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSString *gsTokenIdentifier; // @synthesize gsTokenIdentifier=_gsTokenIdentifier;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_createSession;	// IMP=0x00000000000c76fd
- (id)runAction;	// IMP=0x00000000000c62d1
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000c5c77

@end
