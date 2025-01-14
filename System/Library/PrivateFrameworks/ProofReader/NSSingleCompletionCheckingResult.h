//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCompletionCheckingResult.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface NSSingleCompletionCheckingResult : NSCompletionCheckingResult
{
    _Bool _isPromoted;	// 32 = 0x20
    NSIndexSet *_completeWordIndexes;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027f4d
@property(readonly) _Bool isPromoted; // @synthesize isPromoted=_isPromoted;
@property(readonly, copy) NSIndexSet *completeWordIndexes; // @synthesize completeWordIndexes=_completeWordIndexes;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000002818e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002803a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027f55
- (_Bool)isSingleCompletion;	// IMP=0x0000000000027f45
- (unsigned long long)resultType;	// IMP=0x0000000000027f3a
- (id)description;	// IMP=0x0000000000027e9b
@property(readonly) unsigned long long stopCompletingIndex;
- (void)dealloc;	// IMP=0x0000000000027ded
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 stopCompletingIndex:(unsigned long long)arg3;	// IMP=0x0000000000027d87
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 completeWordIndexes:(id)arg3;	// IMP=0x0000000000027d65
- (id)initWithRange:(struct _NSRange)arg1 replacementString:(id)arg2 completeWordIndexes:(id)arg3 isPromoted:(_Bool)arg4;	// IMP=0x0000000000027cf4

@end

