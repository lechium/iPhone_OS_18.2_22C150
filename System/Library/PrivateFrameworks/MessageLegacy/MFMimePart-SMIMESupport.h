//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFMimePart.h>

@interface MFMimePart (SMIMESupport)
- (id)copySigners;	// IMP=0x00700000000679e8
- (id)SMIMEError;	// IMP=0x00700000000679b0
- (id)decodeApplicationPkcs7_mime;	// IMP=0x0070000000068095
- (id)decodeMultipartSigned;	// IMP=0x0070000000067a28
- (_Bool)_needsSignatureVerification:(id *)arg1;	// IMP=0x0070000000068b13
- (void)_setSigners:(id)arg1;	// IMP=0x0070000000068af2
- (void)_setSMIMEError:(id)arg1;	// IMP=0x0070000000068ad1
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id *)arg3;	// IMP=0x0070000000069ca1
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id *)arg4;	// IMP=0x00700000000698d3
@end

