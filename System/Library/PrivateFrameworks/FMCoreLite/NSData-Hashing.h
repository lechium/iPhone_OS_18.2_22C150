//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Hashing)
- (id)fm_hmac_sha512WithKey:(id)arg1;	// IMP=0x003000000000883a
- (id)fm_hmac_sha256WithKey:(id)arg1;	// IMP=0x0030000000008740
- (id)fm_hmac_sha1WithKey:(id)arg1;	// IMP=0x0030000000008649
- (id)fm_hmac_md5WithKey:(id)arg1;	// IMP=0x003000000000854f
@property(readonly, copy, nonatomic) NSData *fm_sha512Hash;
@property(readonly, copy, nonatomic) NSData *fm_sha256Hash;
@property(readonly, copy, nonatomic) NSData *fm_sha1Hash;
- (id)hexString;	// IMP=0x003000000000f646
- (id)fm_MACAddressString;	// IMP=0x003000000000f5c2
- (id)fm_hexString;	// IMP=0x003000000000f503
@end

