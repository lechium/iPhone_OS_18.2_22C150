//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HashDigest : NSObject
{
    void *_context;	// 8 = 0x8
    long long _digestType;	// 16 = 0x10
}

+ (id)_stringRepresentationForDigest:(char *)arg1 length:(unsigned int)arg2;	// IMP=0x004000000009863a
- (void)updateWithData:(id)arg1;	// IMP=0x0020000000098546
- (void)updateWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000000984fe
- (id)finalAndCompute;	// IMP=0x001000000009840a
- (void)dealloc;	// IMP=0x00100000000983d0
- (id)initWithDigestType:(long long)arg1;	// IMP=0x00100000000982fa

@end

