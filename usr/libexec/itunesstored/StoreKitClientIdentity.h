//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface StoreKitClientIdentity : NSObject
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    _Bool _allowsBootstrapCellularData;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_bundleVersion;	// 32 = 0x20
    _Bool _hidesConfirmationDialogs;	// 40 = 0x28
    _Bool _ignoresInAppPurchaseRestriction;	// 41 = 0x29
    NSString *_receiptDirectoryPath;	// 48 = 0x30
    _Bool _requiresAuthenticationForPayment;	// 56 = 0x38
    NSNumber *_storeIdentifier;	// 64 = 0x40
    NSNumber *_storeVersion;	// 72 = 0x48
    _Bool _sandboxed;	// 80 = 0x50
    _Bool _usesIdentityAttributes;	// 81 = 0x51
    NSString *_vendorIdentifier;	// 88 = 0x58
}

+ (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;	// IMP=0x00200000001abc1c
+ (void)initialize;	// IMP=0x00100000001abbee
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic) _Bool usesIdentityAttributes; // @synthesize usesIdentityAttributes=_usesIdentityAttributes;
@property(copy, nonatomic) NSNumber *storeVersion; // @synthesize storeVersion=_storeVersion;
@property(copy, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(nonatomic) _Bool requiresAuthenticationForPayment; // @synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment;
@property(copy, nonatomic) NSString *receiptDirectoryPath; // @synthesize receiptDirectoryPath=_receiptDirectoryPath;
@property(nonatomic) _Bool ignoresInAppPurchaseRestriction; // @synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction;
@property(nonatomic) _Bool hidesConfirmationDialogs; // @synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
@property(retain, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;	// IMP=0x00100000001ac3bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ac2bb
- (void)setValuesWithSoftwareApplicationProxy:(id)arg1;	// IMP=0x00100000001ac02e
- (void)setValuesWithPaymentQueueClient:(id)arg1;	// IMP=0x00100000001abe6e
- (void)dealloc;	// IMP=0x00100000001abe01

@end

