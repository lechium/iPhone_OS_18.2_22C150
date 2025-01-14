//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GSDocumentIdentifier : NSObject
{
    unsigned char volumeUUID[16];	// 8 = 0x8
    unsigned long long documentID;	// 24 = 0x18
    int deviceID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000ac66
- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000000ae38
- (id)description;	// IMP=0x000000000000ad8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ad16
- (unsigned long long)hash;	// IMP=0x000000000000ac6e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000abb0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ab3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ab0b
- (id)initWithDocumentIdentifier:(id)arg1;	// IMP=0x000000000000aaa5

@end

