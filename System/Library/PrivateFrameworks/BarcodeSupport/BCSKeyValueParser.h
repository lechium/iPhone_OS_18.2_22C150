//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BCSKeyValueParser : NSObject
{
    NSString *_string;	// 8 = 0x8
    unsigned long long _currentIndex;	// 16 = 0x10
    unsigned long long _stringLength;	// 24 = 0x18
    NSMutableDictionary *_keyValuePairs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001287b
- (unsigned long long)_numberOfPreviousBackSlashesFromIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;	// IMP=0x0000000000012824
- (unsigned long long)_indexOfDelimiter:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001275e
- (_Bool)_parseNextKeyValuePair;	// IMP=0x00000000000125c9
@property(readonly, copy, nonatomic) NSDictionary *keyValuePairs;
- (id)initWithString:(id)arg1 startIndex:(unsigned long long)arg2;	// IMP=0x00000000000124a8

@end
