//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusionConfig : NSObject
{
    unsigned long long _sourceCount;	// 8 = 0x8
    unsigned char (*_matrix)[47];	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c51fa
@property(readonly, nonatomic) unsigned long long sourceCount; // @synthesize sourceCount=_sourceCount;
- (void)enumerateElementsForSourceAtIndex:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5ed5
- (unsigned char)passRuleForElement:(long long)arg1 forSourceAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000c5da7
- (void)setPassRule:(unsigned char)arg1 forElement:(long long)arg2 forSourceAtIndex:(unsigned long long)arg3;	// IMP=0x00000000000c5c7b
- (id)debugDescription;	// IMP=0x00000000000c5419
- (void)dealloc;	// IMP=0x00000000000c53da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5364
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c527d
- (id)init;	// IMP=0x00000000000c5269
- (id)initWithSourceCount:(unsigned long long)arg1;	// IMP=0x00000000000c5202

@end

