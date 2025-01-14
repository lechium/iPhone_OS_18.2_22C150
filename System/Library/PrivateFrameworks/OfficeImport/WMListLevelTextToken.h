//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface WMListLevelTextToken : NSObject
{
    NSString *_string;	// 8 = 0x8
    int _level;	// 16 = 0x10
    CMNumberFormatter *_formatter;	// 24 = 0x18
}

+ (id)tokenWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;	// IMP=0x006000000045501a
- (void).cxx_destruct;	// IMP=0x00000000004550c3
@property(readonly) int level; // @synthesize level=_level;
@property(readonly) NSString *string; // @synthesize string=_string;
- (id)stringForIndex:(unsigned long long)arg1;	// IMP=0x00000000004550ad
- (id)initWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;	// IMP=0x0000000000454f59

@end

