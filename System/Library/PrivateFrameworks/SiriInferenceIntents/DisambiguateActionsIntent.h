//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSString;

@interface DisambiguateActionsIntent : INIntent
{
}

- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005190
- (id)init;	// IMP=0x00000000000050d0

// Remaining properties
@property(nonatomic, copy) NSString *candidateActions; // @dynamic candidateActions;
@property(nonatomic, copy) NSString *candidateBundles; // @dynamic candidateBundles;
@property(nonatomic, copy) NSString *selectedCandidateIndex; // @dynamic selectedCandidateIndex;

@end
