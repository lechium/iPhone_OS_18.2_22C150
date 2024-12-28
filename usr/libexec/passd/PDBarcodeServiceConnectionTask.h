//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PDBarcodeServiceConnectionTask
{
    NSURL *_barcodeServiceURL;	// 8 = 0x8
    NSString *_passUniqueIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001b61ff
- (void).cxx_destruct;	// IMP=0x00200000001b7056
@property(copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(copy, nonatomic) NSURL *barcodeServiceURL; // @synthesize barcodeServiceURL=_barcodeServiceURL;
- (_Bool)isValid;	// IMP=0x00100000001b6ffd
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000001b6e46
- (id)request;	// IMP=0x00100000001b647b
- (unsigned long long)numberOfBackoffLevels;	// IMP=0x00100000001b646b
- (const CDStruct_316206b0 *)backoffLevels;	// IMP=0x00100000001b645e
- (id)bodyDictionary;	// IMP=0x00100000001b6456
- (id)headerFields;	// IMP=0x00100000001b63ad
- (id)queryFields;	// IMP=0x00100000001b63a5
- (id)endpointComponents;	// IMP=0x00100000001b639d
- (id)method;	// IMP=0x00100000001b6395
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001b62f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b6207

@end
