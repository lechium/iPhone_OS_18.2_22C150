//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BRCChecksummingOutputStream : NSOutputStream
{
    struct CC_SHA1state_st _ctx;	// 8 = 0x8
    unsigned char _sig[21];	// 104 = 0x68
    _Bool _isOpen;	// 125 = 0x7d
}

+ (id)checksummingOutputStreamWithTag:(unsigned char)arg1;	// IMP=0x0060000000080e47
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000080f83
- (unsigned long long)streamStatus;	// IMP=0x0000000000080f65
- (void)close;	// IMP=0x0000000000080f27
- (void)open;	// IMP=0x0000000000080e84
- (_Bool)hasSpaceAvailable;	// IMP=0x0000000000080e7c
- (id)initWithTag:(unsigned char)arg1;	// IMP=0x0000000000080e05
@property(readonly, nonatomic) NSData *signature;

@end

