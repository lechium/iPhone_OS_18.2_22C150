//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16CryptoKitPrivate9TDMClient : NSObject
{
    MISSING_TYPE *oprfClient;	// 8 = 0x8
    MISSING_TYPE *input;	// 32 = 0x20
    MISSING_TYPE *blind;	// 48 = 0x30
    MISSING_TYPE *be;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000056a00
- (id)init;	// IMP=0x00000000000569b0
- (id)finalizeWithFSR:(id)arg1 evaluatedElement:(id)arg2 proof:(id)arg3 publicKey:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000567a0
- (id)blindedElement;	// IMP=0x0000000000055e70
- (id)initWithTID:(id)arg1;	// IMP=0x0000000000055da0

@end
