//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSQLiteComparisonPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate
{
    NSString *_escapeCharacter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000023271
@property(readonly, nonatomic) NSString *escapeCharacter; // @synthesize escapeCharacter=_escapeCharacter;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000000000231b9
- (id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3;	// IMP=0x0000000000023131

@end

