//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HKCFGTerminal.h"

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface _HKCFGCharacterSequenceTerminal : _HKCFGTerminal
{
    NSCharacterSet *_characterSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bd248
@property(copy, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
- (unsigned long long)_minimumLength;	// IMP=0x00000000000bd217
- (id)_label;	// IMP=0x00000000000bd20a
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;	// IMP=0x00000000000bd19e

@end
