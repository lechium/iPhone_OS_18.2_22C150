//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSURLConnectionResponse;

@interface CheckoutRentalKeysOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    _Bool _backgroundCheckout;	// 104 = 0x68
    NSString *_clientIdentifierHeader;	// 112 = 0x70
    NSNumber *_rentalKeyIdentifier;	// 120 = 0x78
    NSArray *_sinfs;	// 128 = 0x80
    SSURLConnectionResponse *_urlResponse;	// 136 = 0x88
    NSString *_userAgent;	// 144 = 0x90
    _Bool _shouldValidateRentalInfo;	// 152 = 0x98
    _Bool _checkoutWithPlay;	// 153 = 0x99
    unsigned long long _checkoutType;	// 160 = 0xa0
}

@property(nonatomic) unsigned long long checkoutType; // @synthesize checkoutType=_checkoutType;
@property(nonatomic, getter=shouldCheckoutWithPlay) _Bool checkoutWithPlay; // @synthesize checkoutWithPlay=_checkoutWithPlay;
@property(nonatomic) _Bool shouldValidateRentalInfo; // @synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo;
@property(getter=isBackgroundCheckout) _Bool backgroundCheckout; // @synthesize backgroundCheckout=_backgroundCheckout;
- (void)_showErrorDialogForOutput:(id)arg1;	// IMP=0x001000000002b9a6
- (void)_run;	// IMP=0x001000000002b338
- (id)_primarySINF;	// IMP=0x001000000002b2f3
- (_Bool)_performCheckout:(id *)arg1;	// IMP=0x001000000002aedb
- (_Bool)_haveValidRentalInformation;	// IMP=0x001000000002a938
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002a2fd
- (id)_copyRentalIdentifier;	// IMP=0x001000000002a277
- (id)_copyAccountIdentifier;	// IMP=0x001000000002a1f1
- (id)_bodyData;	// IMP=0x001000000002977c
- (void)run;	// IMP=0x0010000000029742
@property(copy) NSString *userAgent;
@property(readonly) SSURLConnectionResponse *URLResponse;
@property(readonly) NSArray *sinfs;
@property(copy) NSString *clientIdentifierHeader;
@property(readonly) NSNumber *rentalKeyIdentifier;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x001000000002949b
- (id)initWithStoreDownloadSinfs:(id)arg1;	// IMP=0x00100000000292be
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x00100000000291b0
- (id)initWithSinfs:(id)arg1;	// IMP=0x00100000000290dc
- (id)init;	// IMP=0x00100000000290c8

@end
