//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDDynamicAssociatedDomain : NSObject
{
    NSString *_host;	// 8 = 0x8
    NSArray *_patterns;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000003eb54f
@property(retain, nonatomic) NSArray *patterns; // @synthesize patterns=_patterns;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (unsigned long long)hash;	// IMP=0x00100000003eb4a8
- (_Bool)isEqualToDomain:(id)arg1;	// IMP=0x00100000003eb456
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003eb3ee
- (id)description;	// IMP=0x00100000003eb306
- (id)initWithHost:(id)arg1;	// IMP=0x00100000003eb29b

@end

