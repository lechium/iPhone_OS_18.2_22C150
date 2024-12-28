//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class EKDirectoryGroup, EKDirectorySearchResultSet, NSString;

__attribute__((visibility("hidden")))
@interface EKGroupExpansionOperation : NSOperation
{
    _Bool _isFinished;	// 8 = 0x8
    _Bool _isExecuting;	// 9 = 0x9
    NSString *_accountID;	// 16 = 0x10
    EKDirectoryGroup *_group;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    EKDirectorySearchResultSet *_resultsSet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000099967
- (void)_finishWithError:(id)arg1;	// IMP=0x000000000009989b
- (id)_processResults:(id)arg1 class:(Class)arg2;	// IMP=0x000000000009976d
- (void)_processResults:(id)arg1;	// IMP=0x000000000009950f
- (_Bool)isFinished;	// IMP=0x00000000000994ff
- (_Bool)isExecuting;	// IMP=0x00000000000994ef
- (_Bool)isConcurrent;	// IMP=0x00000000000994e7
- (void)main;	// IMP=0x000000000009935b
- (void)start;	// IMP=0x00000000000992fc
- (id)initWithSource:(id)arg1 group:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000099201

@end
