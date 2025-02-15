//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSScanner, _HKCFGNodeCache;

__attribute__((visibility("hidden")))
@interface _HKCFGParseContext : NSObject
{
    NSScanner *_scanner;	// 8 = 0x8
    unsigned long long _lengthAllowance;	// 16 = 0x10
    unsigned long long _recursiveDepth;	// 24 = 0x18
    _HKCFGNodeCache *_cache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000019a6b
@property(readonly, nonatomic) _HKCFGNodeCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) unsigned long long recursiveDepth; // @synthesize recursiveDepth=_recursiveDepth;
@property(readonly, nonatomic) unsigned long long lengthAllowance; // @synthesize lengthAllowance=_lengthAllowance;
@property(readonly, nonatomic) NSScanner *scanner; // @synthesize scanner=_scanner;
- (void)increaseLengthAllowance:(unsigned long long)arg1;	// IMP=0x000000000001949c
- (void)decreaseLengthAllowance:(unsigned long long)arg1;	// IMP=0x00000000000190a1
- (void)decrementRecursiveDepth;	// IMP=0x00000000000194a6
- (void)incrementRecursiveDepth;	// IMP=0x00000000000190ab
- (id)initWithScanner:(id)arg1 lengthAllowance:(unsigned long long)arg2;	// IMP=0x00000000000185c6

@end

