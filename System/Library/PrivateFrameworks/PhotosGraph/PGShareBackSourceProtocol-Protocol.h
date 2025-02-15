//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, PGGraph;

@protocol PGShareBackSourceProtocol
- (NSArray *)prepareAndReturnSuggesterResultsForInputs:(NSArray *)arg1 inGraph:(PGGraph *)arg2 error:(id *)arg3;
- (NSArray *)suggesterResultsForInputs:(NSArray *)arg1 momentNodes:(NSSet *)arg2 inGraph:(PGGraph *)arg3 error:(id *)arg4;
- (NSArray *)validInputsForSource:(NSArray *)arg1 givenSuggesterResults:(NSArray *)arg2;
- (_Bool)prepareSourceWithGraph:(PGGraph *)arg1;
@end

