//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationWordsSeeker : NSObject
{
    _Bool _reverse;	// 8 = 0x8
    NSArray *_targetStringWords;	// 16 = 0x10
    NSArray *_targetSubstringWords;	// 24 = 0x18
    NSString *_targetString;	// 32 = 0x20
    NSString *_targetSubstring;	// 40 = 0x28
}

+ (_Bool)_isSubstringArray:(id)arg1 equalToSubstringArray:(id)arg2;	// IMP=0x0060000000f8dfb4
+ (id)_prepareAllWordsWithString:(id)arg1 reverse:(_Bool)arg2;	// IMP=0x0060000000f8dd9e
- (void).cxx_destruct;	// IMP=0x0000000000f8e895
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) NSString *targetSubstring; // @synthesize targetSubstring=_targetSubstring;
@property(retain, nonatomic) NSString *targetString; // @synthesize targetString=_targetString;
@property(retain, nonatomic) NSArray *targetSubstringWords; // @synthesize targetSubstringWords=_targetSubstringWords;
@property(retain, nonatomic) NSArray *targetStringWords; // @synthesize targetStringWords=_targetStringWords;
- (struct _NSRange)rangeOfSubstring:(id)arg1 fullString:(id)arg2 reverse:(_Bool)arg3;	// IMP=0x0000000000f8e711
- (struct _NSRange)_search;	// IMP=0x0000000000f8e3bb
- (_Bool)validateWordBoundariesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000f8e13f
- (id)initWithString:(id)arg1 substring:(id)arg2 reverse:(_Bool)arg3;	// IMP=0x0000000000f8dc55

@end
