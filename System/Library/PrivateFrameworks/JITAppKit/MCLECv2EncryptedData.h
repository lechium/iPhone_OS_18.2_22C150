//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface MCLECv2EncryptedData : NSObject
{
    MISSING_TYPE *ephemeralPublicKey;	// 8 = 0x8
    MISSING_TYPE *gcmEncryptedData;	// 24 = 0x18
    MISSING_TYPE *gcmTag;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000046940
- (id)init;	// IMP=0x0000000000046340
@property(nonatomic, readonly) NSString *gcmTag;
@property(nonatomic, readonly) NSString *gcmEncryptedData;
@property(nonatomic, readonly) NSString *ephemeralPublicKey;

@end
