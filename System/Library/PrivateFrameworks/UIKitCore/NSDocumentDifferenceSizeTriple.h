//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDocumentDifferenceSize;

__attribute__((visibility("hidden")))
@interface NSDocumentDifferenceSizeTriple : NSObject
{
    NSDocumentDifferenceSize *_dueToRecentChangesBeforeSaving;	// 8 = 0x8
    NSDocumentDifferenceSize *_betweenPreservingPreviousVersionAndSaving;	// 16 = 0x10
    NSDocumentDifferenceSize *_betweenPreviousSavingAndSaving;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000009b04e4
@property(readonly, nonatomic) NSDocumentDifferenceSize *betweenPreviousSavingAndSaving; // @synthesize betweenPreviousSavingAndSaving=_betweenPreviousSavingAndSaving;
@property(readonly, nonatomic) NSDocumentDifferenceSize *betweenPreservingPreviousVersionAndSaving; // @synthesize betweenPreservingPreviousVersionAndSaving=_betweenPreservingPreviousVersionAndSaving;
@property(readonly, nonatomic) NSDocumentDifferenceSize *dueToRecentChangesBeforeSaving; // @synthesize dueToRecentChangesBeforeSaving=_dueToRecentChangesBeforeSaving;
- (id)description;	// IMP=0x00000000009b0491
- (id)init;	// IMP=0x00000000009b0405

@end
