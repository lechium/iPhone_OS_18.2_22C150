//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LegacySigningKeyPrivate : NSObject
{
    id _secKeyRef;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005f92
@property(retain, nonatomic) id secKeyRef; // @synthesize secKeyRef=_secKeyRef;
- (id)publicKey;	// IMP=0x0000000000005f0c
- (id)dataRepresentation;	// IMP=0x0000000000005ef4
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005ed2
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005d8c
- (id)init;	// IMP=0x0000000000005c6d

@end

