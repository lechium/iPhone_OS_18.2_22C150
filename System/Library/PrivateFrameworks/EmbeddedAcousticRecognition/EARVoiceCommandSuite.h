//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface EARVoiceCommandSuite : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_commandSpecs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000716456
- (void).cxx_destruct;	// IMP=0x0000000000716f93
@property(readonly, copy, nonatomic) NSSet *commandSpecs; // @synthesize commandSpecs=_commandSpecs;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithPlistJSONDictionary:(id)arg1;	// IMP=0x0000000000716894
- (id)plistJSONDictionary;	// IMP=0x00000000007166ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007164ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000071645e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000071644b
- (unsigned long long)hash;	// IMP=0x0000000000716402
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007162bb
- (id)initWithIdentifier:(id)arg1 commands:(id)arg2;	// IMP=0x00000000007161d8

@end

