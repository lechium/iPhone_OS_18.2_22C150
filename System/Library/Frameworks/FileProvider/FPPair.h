//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FPPair : NSObject
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x00100000000ba5bd
- (void).cxx_destruct;	// IMP=0x00000000000ba80b
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (id)description;	// IMP=0x00000000000ba787
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ba71b
- (_Bool)isEqualToPair:(id)arg1;	// IMP=0x00000000000ba6af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ba682
- (unsigned long long)hash;	// IMP=0x00000000000ba643

@end

