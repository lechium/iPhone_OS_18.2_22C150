//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CNSegment : NSObject
{
    NSNumber *_start;	// 8 = 0x8
    NSNumber *_end;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000314c27
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
- (unsigned long long)indexOffsetFrom:(unsigned long long)arg1;	// IMP=0x0000000000314b30
- (unsigned long long)count;	// IMP=0x0000000000314aa4
- (_Bool)isValid;	// IMP=0x0000000000314a11
- (id)initWithStart:(long long)arg1 end:(long long)arg2;	// IMP=0x0000000000314952

@end
