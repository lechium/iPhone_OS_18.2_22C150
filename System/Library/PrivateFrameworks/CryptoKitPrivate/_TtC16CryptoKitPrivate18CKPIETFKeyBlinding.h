//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC16CryptoKitPrivate18CKPIETFKeyBlinding : NSObject
{
}

+ (struct __SecKey *)unblindPublicKey:(struct __SecKey *)arg1 with:(struct __SecKey *)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000030000
+ (struct __SecKey *)blindPublicKeyWithPublicKey:(struct __SecKey *)arg1 with:(struct __SecKey *)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x008000000002ffd0
+ (struct __SecKey *)secKeyFromCompressedRepresentation:(id)arg1;	// IMP=0x008000000002ff80
+ (id)compressedRepresentationFromSecKey:(struct __SecKey *)arg1;	// IMP=0x008000000002ff30
+ (id)blindSign:(id)arg1 blindedBy:(struct __SecKey *)arg2 with:(struct __SecKey *)arg3 context:(id)arg4 error:(id *)arg5;	// IMP=0x008000000002fe10
+ (_Bool)isValidWithSignature:(id)arg1 for:(id)arg2 with:(struct __SecKey *)arg3 context:(id)arg4;	// IMP=0x008000000002fd20
+ (id)privateScalarFromSecKey:(struct __SecKey *)arg1;	// IMP=0x008000000002fca0
- (void).cxx_destruct;	// IMP=0x0000000000030190
- (id)init;	// IMP=0x0000000000030130

@end
