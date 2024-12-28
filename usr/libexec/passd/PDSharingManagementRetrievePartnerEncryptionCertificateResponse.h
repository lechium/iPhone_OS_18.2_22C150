//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PDSharingManagementRetrievePartnerEncryptionCertificateResponse : PKPaymentWebServiceResponse
{
    NSData *_certificate;	// 8 = 0x8
    NSArray *_supportedEncryptionSchemes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000026cc0b
@property(readonly, nonatomic) NSArray *supportedEncryptionSchemes; // @synthesize supportedEncryptionSchemes=_supportedEncryptionSchemes;
@property(readonly, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
- (id)initWithData:(id)arg1;	// IMP=0x001000000026c9aa

@end
