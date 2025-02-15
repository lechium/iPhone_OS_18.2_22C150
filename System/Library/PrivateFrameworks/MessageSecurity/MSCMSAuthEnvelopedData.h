//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MSOID, NSArray, NSData;
@protocol MSCMSMessage;

@interface MSCMSAuthEnvelopedData : NSObject
{
    MISSING_TYPE *dataContent;	// 8 = 0x8
    MISSING_TYPE *recipients;	// 24 = 0x18
    MISSING_TYPE *encryptionAlgorithm;	// 32 = 0x20
    MISSING_TYPE *protectedAttributes;	// 40 = 0x28
    MISSING_TYPE *unprotectedAttributes;	// 48 = 0x30
    MISSING_TYPE *originatorCertificates;	// 56 = 0x38
    MISSING_TYPE *contentType;	// 64 = 0x40
    MISSING_TYPE *embeddedContent;	// 72 = 0x48
    MISSING_TYPE *encryptedContent;	// 80 = 0x50
}

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000038a00
- (void).cxx_destruct;	// IMP=0x0000000000038cc0
- (id)init;	// IMP=0x0000000000038c60
- (id)type;	// IMP=0x0000000000038b50
- (id)encodeMessageSecurityObject:(id *)arg1;	// IMP=0x00000000000386c0
- (void)setContentTypeWithType:(id)arg1;	// IMP=0x0000000000035550
- (void)addUnprotectedAttribute:(id)arg1;	// IMP=0x0000000000035400
- (void)addProtectedAttribute:(id)arg1;	// IMP=0x0000000000035310
- (id)getAttributesWithOID:(id)arg1;	// IMP=0x0000000000035260
- (void)addRecipient:(id)arg1;	// IMP=0x0000000000034e50
- (id)initWithEmbeddedContent:(id)arg1 recipient:(id)arg2 encryptionAlgorithm:(id)arg3;	// IMP=0x0000000000034db0
- (id)initWithEmbeddedContent:(id)arg1 recipient:(id)arg2;	// IMP=0x0000000000034c00
- (id)initWithDataContent:(id)arg1 recipient:(id)arg2 encryptionAlgorithm:(id)arg3;	// IMP=0x0000000000034980
- (id)initWithDataContent:(id)arg1 recipient:(id)arg2;	// IMP=0x0000000000034820
- (id)initWithEncryptionAlgorithm:(id)arg1;	// IMP=0x0000000000034740
@property(nonatomic, retain) id <MSCMSMessage> embeddedContent; // @synthesize embeddedContent;
@property(nonatomic, retain) MSOID *contentType; // @synthesize contentType;
@property(nonatomic, copy) NSArray *originatorCertificates;
@property(nonatomic, copy) NSArray *unprotectedAttributes;
@property(nonatomic, copy) NSArray *protectedAttributes;
@property(nonatomic, retain) MSOID *encryptionAlgorithm; // @synthesize encryptionAlgorithm;
@property(nonatomic, copy) NSArray *recipients;
@property(nonatomic, copy) NSData *dataContent;

@end

