//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface NSSLocaleInfoCache : NSObject
{
    NSDictionary *_reply;	// 8 = 0x8
    NSString *_gizmoBuildVersion;	// 16 = 0x10
}

+ (void)handleMemoryPressureEvent;	// IMP=0x0020000000021d4c
+ (id)cachedReply;	// IMP=0x0010000000021a4e
+ (void)cacheReply:(id)arg1 forGizmoBuildVersion:(id)arg2;	// IMP=0x0010000000021568
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000213bb
- (void).cxx_destruct;	// IMP=0x0020000000021db5
@property(retain, nonatomic) NSString *gizmoBuildVersion; // @synthesize gizmoBuildVersion=_gizmoBuildVersion;
@property(retain, nonatomic) NSDictionary *reply; // @synthesize reply=_reply;
- (_Bool)isValidForGizmoBuildVersion:(id)arg1;	// IMP=0x0010000000021d69
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000021430
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000213c3

@end

