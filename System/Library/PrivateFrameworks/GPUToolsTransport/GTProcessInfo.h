//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface GTProcessInfo : NSObject
{
    int _processIdentifier;	// 8 = 0x8
    int _ppid;	// 12 = 0xc
    NSString *_processName;	// 16 = 0x10
    NSArray *_arguments;	// 24 = 0x18
    NSDictionary *_environment;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000335e7
- (void).cxx_destruct;	// IMP=0x0000000000033f54
@property(nonatomic) int ppid; // @synthesize ppid=_ppid;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (id)description;	// IMP=0x0000000000033e3d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033d43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033c7f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033729
- (id)init;	// IMP=0x00000000000335ef

@end

