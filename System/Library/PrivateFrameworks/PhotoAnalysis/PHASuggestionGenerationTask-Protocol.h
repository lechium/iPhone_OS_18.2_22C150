//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PHATask-Protocol.h>

@class MAProgressReporter, NSDictionary, PGManager;

@protocol PHASuggestionGenerationTask <PHATask>
@property(copy, nonatomic) NSDictionary *suggestionOptionsDictionary;
- (NSDictionary *)generateSuggestionsWithGraphManager:(PGManager *)arg1 progressReporter:(MAProgressReporter *)arg2 error:(id *)arg3;
@end
