//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _EARWordPart : NSObject
{
    NSString *_tagName;	// 8 = 0x8
    NSString *_orthography;	// 16 = 0x10
    long long _tag;	// 24 = 0x18
    unsigned long long _frequency;	// 32 = 0x20
    NSSet *_pronunciations;	// 40 = 0x28
    NSString *_phoneticOrthography;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009682b
@property(readonly, nonatomic) NSString *phoneticOrthography; // @synthesize phoneticOrthography=_phoneticOrthography;
@property(readonly, nonatomic) NSSet *pronunciations; // @synthesize pronunciations=_pronunciations;
@property(readonly, nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
@property(readonly, nonatomic) NSString *tagName;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4 phoneticOrthography:(id)arg5;	// IMP=0x0000000000096613
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4;	// IMP=0x00000000000965f0
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3;	// IMP=0x00000000000964de

@end

