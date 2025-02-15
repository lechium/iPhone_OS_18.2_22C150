//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface WebBundleManifest : NSObject
{
    NSString *_version;	// 8 = 0x8
    NSSet *_files;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000bf99c9
- (void).cxx_destruct;	// IMP=0x0020000000bf9bd3
@property(retain, nonatomic) NSSet *files; // @synthesize files=_files;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000bf9a5d
- (unsigned long long)hash;	// IMP=0x0010000000bf99d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000bf995c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000bf9823
- (id)initWithVersion:(id)arg1 files:(id)arg2;	// IMP=0x0010000000bf9785

@end

