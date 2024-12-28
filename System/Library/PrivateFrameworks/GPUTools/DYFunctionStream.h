//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYFunctionStream : NSObject
{
}

- (void)enumerateFunctionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ca4e
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000000ca36
- (const struct Function *)readFunction;	// IMP=0x000000000000ca1e
- (const struct Function *)peekFunction;	// IMP=0x000000000000ca06
- (_Bool)resetToFunction:(const struct Function *)arg1;	// IMP=0x000000000000c9ee
- (void)clearResetMarker;	// IMP=0x000000000000c9d9
- (void)setResetMarker;	// IMP=0x000000000000c9c4
- (void)reset;	// IMP=0x000000000000c9af

@end
