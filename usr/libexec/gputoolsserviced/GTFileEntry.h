//
//     Generated by classdump-c 4.2.0 (64 bit).
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

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000c779
- (void).cxx_destruct;	// IMP=0x002000000000cb23
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)description;	// IMP=0x001000000000ca28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000c9a3
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000c8ad
- (id)initWithLink:(id)arg1 destination:(id)arg2;	// IMP=0x001000000000c80c
- (id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2;	// IMP=0x001000000000c781

@end

