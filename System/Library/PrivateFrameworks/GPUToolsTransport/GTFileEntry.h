//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTFileEntry : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSString *_destination;	// 16 = 0x10
    unsigned long long _fileSize;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001ba56
- (void).cxx_destruct;	// IMP=0x000000000001be00
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)description;	// IMP=0x000000000001bd05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bc80
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bb8a
- (id)initWithLink:(id)arg1 destination:(id)arg2;	// IMP=0x000000000001bae9
- (id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2;	// IMP=0x000000000001ba5e

@end
